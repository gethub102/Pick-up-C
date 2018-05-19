#include <stdio.h>
#include <string.h>


int main(void) {
	char message[12] = "Hello world";

	printf("message is %s\n", message);

	printf("11th char is %c\n", message[11]);
	printf("length of message is %zu\n", strlen(message));
	return 0;
}
