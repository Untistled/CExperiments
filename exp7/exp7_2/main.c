#include <stdio.h>

int calc(int (*fun)(int, int), int a, int b) {
	return fun(a, b);
}

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int div(int a, int b) {
	return a / b;
}

int main() {
	int a = 20, b = 10;
	
	printf("Add: %d + %d = %d\n", a, b, calc(add, a, b));
	printf("Sub: %d - %d = %d\n", a, b, calc(sub, a, b));
	printf("Mul: %d * %d = %d\n", a, b, calc(mul, a, b));
	printf("Div: %d / %d = %d\n", a, b, calc(div, a, b));
	
	return 0;
}
