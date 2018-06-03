// ps -aux | grep main
// kill -15 pid
// kill -9 pid

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void myhandle(int mysignal) {
	printf("myhandle with signal %d\n", mysignal);
	signal(SIGTERM, (void*)myhandle);
}

int main(void) {
	int i = 0;
	signal(SIGTERM, (void*)myhandle);
	while (1) {
		printf("i = %d\n", i);
		i++;
		sleep(1);
	}
	return 0;
}