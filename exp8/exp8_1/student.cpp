#include <stdio.h>
#include <string.h>

#include "student.h"

#define BUF 64

Student stu(int id, char* name, int chinese, int math, int english)
{
	Student s = {
		id,
		name,
		chinese,
		math,
		english
	};

	return s;
}

Student stu()
{
	int id, chinese, math, english;
	char name[BUF];

	printf("ID: ");
	scanf_s("%d", &id);

	printf("\tName: ");
	//gets_s(name, BUF);
	scanf_s("%s", name, BUF);

	printf("\tChinese: ");
	scanf_s("%d", &chinese);

	printf("\tMath: ");
	scanf_s("%d", &math);

	printf("\tEnglish: ");
	scanf_s("%d", &english);

	return stu(id, name, chinese, math, english);
}

int total(Student* s)
{
	return (s->chinese + s->math + s->english);
}

Grade stucmp(Student* s1, Student* s2)
{
	if (total(s1) > total(s2)) return Grade::Better;
	else if (total(s1) < total(s2)) return Grade::Worse;

	if (s1->chinese > s2->chinese) return Grade::Better;
	else if (s1->chinese < s2->chinese) return Grade::Worse;

	if (s1->math > s2->math) return Grade::Better;
	else if (s1->math < s2->math) return Grade::Worse;

	if (s1->english > s2->english) return Grade::Better;
	else if (s1->english < s2->english) return Grade::Worse;

	return Grade::Equal;
}

void sort(Student* ss, int n)
{
	Student tmp;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			switch (stucmp(ss + j, ss + j + 1))
			{
			case Grade::Worse:
				tmp = ss[j];
				ss[j] = ss[j + 1];
				ss[j + 1] = tmp;
			}
		}
	}
}

void print(Student* s)
{
	printf("%10d%20s%5d%5d%5d\n", s->id, s->name, s->chinese, s->math, s->english);
}
