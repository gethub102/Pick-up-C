// in linux ```export MYENV=something``` to set env var
// unset MYENV to unset it


#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int ret; 
	ret = putenv("MYENV=hello");
	if (ret == -1) {
		perror("putenv");
		exit(1);
	}
	ret = system("./printenv");
	if (ret == -1) {
		perror("system");
		printf("ret = %d\n", ret);
	}

	// overwrite flag 1 is to overwrite
	// 0 is not to overwrite 
	ret = setenv("MYENV", "hello_1", 1);
	if (ret == -1) {
		perror("putenv");
		exit(1);
	}

	ret = system("./printenv");
	if (ret == -1) {
		perror("system");
		printf("ret = %d\n", ret);
	}
	
	return 0;
}