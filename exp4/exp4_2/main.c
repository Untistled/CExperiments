#include <stdio.h>

char transfer(char c) {
	if (c >= 'a' && c <= 'z') {
		return 26 - (c - 'a' + 1) + 'a';
	} else if (c >= 'A' && c <= 'Z') {
		return 26 - (c - 'A' + 1) + 'A';
	} else {
		return c;
	}
}

int main() {
	char* str = "Wl blf pmld sld nfxs R olev blf?";
	printf("Transferred string: %s\n", str);

	printf("Original string: ");
	for (int i = 0; str[i] != '\0'; i++) {
		char c = transfer(str[i]);
		printf("%c", c);
	}
	printf("\n");

	/*
	for (char c = 'A'; c <= 'Z'; c++) {
		printf("%c -> %c\n", c, transfer(c));
	}

	for (char c = 'a'; c <= 'z'; c++) {
		printf("%c -> %c\n", c, transfer(c));
	}
	*/

	return 0;
}
