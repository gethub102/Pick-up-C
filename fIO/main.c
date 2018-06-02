#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *fs;
	char buff[10];
	size_t sz;

	fs = fopen("mytext.txt", "r");
	if (fs == NULL) {
		perror("fopen");
		exit(1);
	}

	while (!feof(fs)) {
		sz = fread((void*)buff, 9, 1, fs);
		buff[9] = '\0';
		printf("%s", buff);
	}

	printf("\n");


	fclose(fs);

	return 0;
}