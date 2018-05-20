#include <stdio.h>
#include <stdint.h>

typedef uint32_t int32;

typedef struct {
	char *name;
	int age;
} Person;

int main(void) {
	struct {
		int a;
		float b; 
		int c;
	} mystore;

	mystore.a = 4;
	mystore.b = 2.3;
	mystore.c = 0;

	printf(" a = %d, b = %f, c = %d\n", mystore.a, mystore.b, mystore.c);

	Person p ;
	p.name = "wnebin";
	p.age = 23;

	printf("name is %s, and age is %d\n", p.name, p.age);
	return 0;


}
