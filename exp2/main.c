#include <stdio.h>

void input(const char* tip, int* value) {
i:
    printf("%s", tip);
    scanf("%d", value);

    if (*value < 0 || *value > 100) {
        printf("Try again: invalid input.\n");
        goto i;
    }
}

int round_from(double n) {
    if ((int)(n / 0.5) % 2 == 0) {
        return (int)n;
    }
    return (int)(n + 1);
}

int main() {
    int chinese, math, english;
    char grade = 'U';

    input("Chinese: ", &chinese);
    input("Math: ", &math);
    input("English: ", &english);

    if (chinese < 60 || math < 60 || english < 60) {
        grade = 'F';
    }
    else {
        const int average = round_from((chinese + math + english) / 3.0);

        if (average < 60) {
            grade = 'F';
        }
        else if (average < 70) {
            grade = 'D';
        }
        else if (average < 80) {
            grade = 'C';
        }
        else if (average < 90) {
            grade = 'B';
        }
        else if (average <= 100) {
            grade = 'A';
        }
    }

    if (grade != 'U') {
        printf("Your grade: %c", grade);
    }
    else {
        printf("Undefined Grade");
    }

    // printf("%d\n", round_from(1.2));
    // printf("%d\n", round_from(1.49));
    // printf("%d\n", round_from(1.51));
    // printf("%d\n", round_from(1.8));

    return 0;
}
