#include <stdio.h>

void reverse(char* p);

int main(void) {

	reverse("abc\0");
	printf("\n");
	return 0;
}

void reverse(char *p) {

	if (*p == '\0')
		return;
	reverse(p + 1);
	printf("%c", *p);
}