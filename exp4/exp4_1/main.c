#include <stdio.h>

#define N 12

void bubble_sort(int arr[], int n);
int is_prime(int num);

int main() {
	int n, a[N][N] = { { 0 } };

input:
	printf("Row: ");
	scanf_s("%d", &n);

	if (n <= 0 || n > 10) {
		printf("Error: Out of Limitation.\n");
		goto input;
	}

	for (int i = 0; i < N; i++) {
		a[i][0] = 1;
		a[i][i] = 1;

		for (int j = 0; j <= i; j++) {
			if (j > 0 && j < i) {
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%-5d", a[i][j]);
		}
		printf("\n");
	}

	printf("\n"); // ----------------------------------------------------------------

	bubble_sort(a[N - 1], N);
	for (int i = N - 1; i != -1; i--) {
		printf("%d ", a[N - 1][i]);
	}

	printf("\n"); // ----------------------------------------------------------------

	printf("Prime numbers in row %d: ", N);
	for (int i = 0; i < N; i++) {
		if (is_prime(a[N - 1][i])) {
			printf("%d ", a[N - 1][i]);
		}
	}

	printf("\n"); // ----------------------------------------------------------------

	return 0;
}

void bubble_sort(int arr[], int n) {
	int temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int is_prime(int num) {
	if (num <= 1) return 0;
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) return 0;
	}
	return 1;
}
