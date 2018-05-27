#include <stdio.h>

int main(void) {

	char str[24] = "First string";
	char *ptr = "Second string";

	printf("str = %s\n", str);
	printf("ptr = %s\n", ptr);


	ptr++;
	printf("ptr %s\n", ptr);

	char * pstr = (char*)(&str + 1); // forward a whole string
	printf("str - 1 = %s\n", *(pstr - 2));

	str[1] = 'a';
	printf("str = %s\n", str);

	/*****this will cause bus error*****/
	*(ptr + 1) = 'a'; 
	printf("ptr = %s\n", ptr);

	return 0;
}