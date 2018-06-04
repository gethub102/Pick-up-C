#include <stdio.h>
#include <time.h>

int main(void) {
	char buff[32];
	struct tm *mytm;
	time_t mytime;
	mytime = time(NULL);
	mytm = localtime(&mytime);
	/* yyyy-MM-dd hh:mm:ss */
	strftime(buff, 31, "%Y-%m-%d %H:%M:%S", mytm);

	// AM
	// strftime(buff, 31, "%Y-%m-%d %I:%M:%S %p", mytm);
	
	printf("Date and time: %s\n", buff);

	return 0;
}