#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/select.h>

int main(void) {

	int fd;
	char buff[11];
	int ret, sret;

	fd = 0;

	fd_set readfds;
	struct timeval timeout;

	timeout.tv_sec = 5;
	timeout.tv_usec = 0;

	while (1) {
		/* clear all bits */
		FD_ZERO(&readfds);
		/* set up one bit for fd */
		FD_SET(fd, &readfds);

		/* wait(stop)for any input from fd 0 */
		sret = select(8, &readfds, NULL, NULL, &timeout);
		if (sret == 0) {
			printf("sret = %d\n", sret);
			printf("\ttimeout\n");
		} else {
			memset((void*)buff, 0, 11);
			ret = read(fd, (void*)buff, 10);
			printf("ret = %d\n", ret);
			if (ret != -1) {
				buff[10] = '\0';
				printf("buff = %s\n", buff);
			}
		}

		
	}

	return 0;
}