#include <stdio.h>
#include <stdint.h>

int main(void) {

	typedef uint32_t int32;
	int32 aa = 5;
	printf("aa is %d\n", aa);

	int myint;
	char mychar;
	float mynum;
	double mydb;

	myint = 24;
	mychar = 'F';
	mydb = 32.9;

	printf("myint and mychar is %d, and %c\n", myint, mychar);

	mynum = 24.4;

	printf("mynum is %f\n", mynum);


	printf("int size is %zu\n", sizeof(int));
	printf("myint size is %zu\n", sizeof(myint));

	printf("char size is %zu\n", sizeof(char));
	printf("mychar size is %zu\n", sizeof(mychar));

	printf("float size is %zu\n", sizeof(float));
	printf("mynum size is %zu\n", sizeof(mynum));

	printf("size_t size is %zu\n", sizeof(size_t));

	printf("mydb is %f\n", mydb);
	printf("double size is %zu\n", sizeof(double));
	return 0;
}
