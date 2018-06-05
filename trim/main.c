#include <stdio.h>
#include <string.h>

void trim_string(char *s) {
	char *p = s;
	int len;
	while (*p == ' ' && *p != '\0') {
		p++;
	}
	len = strlen(p);
	/* move len + 1 bytes from p to s */
	/* len + 1 contains one null */
	memmove(s, p, len + 1);

	p = s + len - 1;
	while (*p == ' ' && p > s)
		p--;
	*(++p) = '\0';
}


int main(void) {
	char str[64] = "         Hello World!     ";
	printf("str = >%s<\n", str);

	trim_string(str);
	printf("str = >%s<\n", str);	
	return 0;
}