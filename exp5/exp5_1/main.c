#include <stdio.h>

void print_matrix(int a[3][3]);

void transpose(int a[3][3]) {
	int i, j, temp;
	for (i = 0; i < 3; i++) {
		for (j = i + 1; j < 3; j++) {
			temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	}
}

int main() {
	int matrix[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	printf("Original Matrix:\n");
	print_matrix(matrix);

	transpose(matrix);

	printf("\nTransposed Matrix:\n");
	print_matrix(matrix);

	return 0;
}

void print_matrix(int a[3][3]) {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
