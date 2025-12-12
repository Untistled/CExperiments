#include <stdio.h>

long long fac(long long n) {
	if (n < 0) return -1;
	if (n == 0 || n == 1) 
	{
		printf("Found known: fac(%lld) = 1, End.\n", n);
		return 1;
	}
	printf("Calculating fac(%lld): fac(%lld) = %lld * fac(%lld).\n", n, n, n, n - 1);
	return n * fac(n - 1);
}

int main() {
	int n;

	printf("Enter a non-negative integer: ");
	scanf_s("%d", &n);

	long long result = fac(n);

	if (result != -1) {
		printf("fac(%d) = %lld\n", n, result);
	} else {
		printf("Error: No negative integers.\n");
	}
	return 0;
}
