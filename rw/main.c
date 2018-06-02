#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define SIZE 14

int main(void) {


	int fd;
	char buf[SIZE];
	/* write */
	fd = open("myfile.txt", O_CREAT | O_WRONLY, 0600);
	if (fd == -1) {
		perror("Failed to open file");
		exit(1);
	}

	write(fd, "Hello world\n", 13);


	/* read */
	fd = open("myfile.txt", O_RDONLY);
	if (fd == -1) {
		perror("Failed to open file");
		exit(1);
	} 
		
	read(fd, buf, 13);
	buf[13] = '\0';

	printf(" buf = %s\n", buf);

	close(fd);
	return 0;

}