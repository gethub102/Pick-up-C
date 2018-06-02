#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {

	int childpid;
	int count1 = 0, count2 = 0;

	printf("Before it forks\n");
	childpid = fork();

	if (childpid == 0) {
		printf("This is a child process\n");
		while (count1 < 10) {
			printf("Child process: %d\n", count1++);
			sleep(1);
		}
	} else {
		printf("this is parent process\n");
		while (count2 < 10) {
			printf("Parent process: %d\n", count2++);
			sleep(1);
		}
	}

	return 0;
}