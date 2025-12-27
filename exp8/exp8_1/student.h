#ifndef STUDENT_H
#define STUDENT_H

struct Student
{
	int id;
	char* name;
	int chinese;
	int math;
	int english;
};

enum Grade
{
	Worse = -1,
	Equal,
	Better
};

Student stu(int id, char* name, int chinese, int math, int english);

Student stu();

int total(Student* s);

Grade stucmp(Student* s1, Student* s2);

void sort(Student* ss, int n);

void print(Student* s);

#endif
