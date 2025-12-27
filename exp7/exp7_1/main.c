#include <stdio.h>
#include <string.h>

#define N 64

void remove_special_char_to(char *src, int len, int m, char *ans) {
	for (int i = m; i < len; i++) {
		if (
			(src[i] >= 'a' && src[i] <= 'z') ||
			(src[i] >= 'A' && src[i] <= 'Z') ||
			(src[i] >= '0' && src[i] <= '9')
		) {
			*ans = src[i];
			ans++;
		}
	}
	*ans = '\0';
}

int main() {
	int n, m;
	char str[N] = { 0 }, ans[N] = { 0 };

	printf("Input a string: \n");
	gets_s(str, N);

	printf("Input the starting position: \n");
	scanf_s("%d", &m);

	n = strlen(str);
	remove_special_char_to(str, n, m, ans);

	printf("The new string is: \n%s\n", ans);

	return 0;
}
