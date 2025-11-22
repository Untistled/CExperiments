#include <stdio.h>

#define PI 3.14159265

int main() {
    int a, _100, _10, _1, b;
    double s;

    printf("Enter a number: ");
    scanf_s("%d", &a);

    _100 = a / 100 % 10;
    _10 = a / 10 % 10;
    _1 = a / 1 % 10;
    printf("100: %d, 10: %d, 1: %d\n", _100, _10, _1);

    b = _1 * 100 + _10 * 10 + _100;
    printf("Reversed: %d\n", b);

    s = PI * a * a - PI * b * b;
    if (s < 0) s = -s;
    printf("s: %f\n", s);

    return 0;
}
