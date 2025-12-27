#include "student.h"

//#define TEST

#define N 2

int main()
{
#ifndef TEST
	Student students[N] = {};
	for (int i = 0; i < N; i++)
	{
		students[i] = stu();
	}
#else
	Student students[N] = {
		{1, "Mike", 115, 128, 135},
		{2, "May", 125, 118, 135}
	};
#endif

	sort(students, N);
	for (int i = 0; i < N; i++)
	{
		print(students + i);
	}

	return 0;
}