#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char* ptr;
	ptr = (char*)malloc(24);
	if (ptr == NULL) {
		printf("Failed to get memory\n");
		exit(1);
	}
	strcpy(ptr, "Hello there!");
	printf("ptr: %s\n", ptr);
	free(ptr);
	return 0;
}