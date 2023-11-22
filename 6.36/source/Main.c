#include <stdio.h>

void stringReverse(const char *str) {
	if (*str != '\0') {
		stringReverse(str + 1);
		putchar(*str);
	}
}

int main(void) {
	const char *message = "Hello, World!";

	stringReverse(message);
	putchar('\n');

	return 0;
}