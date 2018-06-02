#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
	pid_t pid;
	int mypipefd[2];
	int ret;
	char buff[20];

	ret = pipe(mypipefd);

	if (ret == -1) {
		perror("pipe");
		exit(1);
	}
	pid = fork();
	if (pid == 0) {
		/* child process */
		printf("Child process\n");
		close(mypipefd[0]);
		write(mypipefd[1], "hello there!", 12);
	} else {
		/* parent process */
		printf("Parent process\n");
		close(mypipefd[1]);
		read(mypipefd[0], buff, 15);
		printf("buff: %s\n", buff);
	}
}