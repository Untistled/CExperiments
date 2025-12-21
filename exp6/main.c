#include <stdio.h>

#include "core.h"

void swap_test()
{
	int a = 114514, b = 415411;
	printf("Before swap: a = %d, b = %d\n", a, b);

	swap(&a, &b);
	printf("After swap: a = %d, b = %d\n", a, b);
}

void transpose_test()
{
	int matrix[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	printf("Original matrix:\n");
	print_matrix(matrix, 3);

	transpose(matrix, 3);

	printf("Transposed matrix:\n");
	print_matrix(matrix, 3);
}

void sort_test()
{
	int arr[] = { 59, 26, 91, 17, 53, 65 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Before sort: ");
	print_array(arr, n);

	my_sort(arr, n);

	printf("After sort: ");
	print_array(arr, n);
}

int main()
{
	swap_test();
	transpose_test();
	sort_test();
	return 0;
}