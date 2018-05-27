#include <stdio.h>
#include <string.h>

int main(void) {

	char str[13] = "First string";
	char *ptr = "Second string";

	printf("str = %s\n", str);
	printf("ptr = %s\n", ptr);

	printf("str len = %lu\n", strlen(str));

	ptr++;
	printf("ptr %s\n", ptr);

	char * pstr = (char*)(&str + 1); // forward a whole string
	printf("str - 1 = %c\n", *(pstr - 2));

	str[1] = 'a';
	printf("str = %c\n", *(str + 1));

	/*****this will cause bus error*****/
	*(ptr + 1) = 'a'; 
	printf("ptr = %s\n", ptr);

	return 0;
}