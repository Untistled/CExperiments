#include "core.h"

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void transpose(int* p, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			swap(p + n * i + j, p + n * j + i);
		}
	}
}

void my_sort(int* arr, int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

void print_array(int* arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void print_matrix(int* p, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", *(p + n * i + j));
		}
		printf("\n");
	}
}
