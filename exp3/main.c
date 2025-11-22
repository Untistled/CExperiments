#include <stdio.h>

int main() {
    int n, arr[10] = { 0 }, total = 0, sum = 0, max = 0, min = 100;
    double average;

    do {
        printf("Times: ");
        scanf("%d", &n);
    } while (n < 3 || n > 10);

    for (int i = 0; i < n; i++) {
    input:
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);

        if (arr[i] < 1 || arr[i] > 99) {
            printf("Try again: out of limitation.\n");
            goto input;
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 != 0 && arr[i] % 2 == 1) {
            total++;
            sum += arr[i];
            if (arr[i] > max) max = arr[i];
            if (arr[i] < min) min = arr[i];
        }
    }

    average = sum * 1.0 / total;

    if (total == 0) printf("No such number!");
    else
        printf("Total = %d, Sum = %d, Average = %f, max = %d, min = %d\n",
            total, sum, average, max, min);

    return 0;
}
