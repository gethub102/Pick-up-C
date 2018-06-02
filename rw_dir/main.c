#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {

	DIR* dir;
	struct dirent *sd;

	dir = opendir(".");
	if (dir == NULL) {
		perror("open dir failed");
		exit(1);
	}

	while ((sd = readdir(dir)) != NULL) {
		printf(">> %s\n", sd->d_name);
	}
	closedir(dir);
	return 0;
}
