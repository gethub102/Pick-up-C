// in mac os it should be init with specific value like this code

#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void *myfunc1(void *ptr);
void *myfunc2(void *ptr);

// in mac should be init
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

int a[100];

int main(void) {

	pthread_t thread1, thread2;
	int thret1, thret2;
	char *msg1 = "First thread";
	char *msg2 = "Sencond thread";

	memset(a, 0, sizeof(a));

	thret1 = pthread_create(&thread1, NULL, myfunc1, (void*) msg1);
	thret2 = pthread_create(&thread2, NULL, myfunc2, (void*) msg2);

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	printf("thret1 = %d\n", thret1);
	printf("thret2 = %d\n", thret2);
	return 0;
}

void *myfunc1(void* ptr) {
	int i;
	char *msg = (char*)ptr;
	printf("msg: %s\n", msg);
	pthread_mutex_lock(&lock);
	for (i = 0; i < 100; i++) {
		printf("X");
		a[i] = i;
	}
	pthread_mutex_unlock(&lock);
	printf("\n");

	return NULL;
}

void *myfunc2(void* ptr) {
	int i ;
	char *msg = (char*)ptr;
	printf("msg: %s\n", msg);
	pthread_mutex_lock(&lock);
	for (i = 0; i < 100; i++) {
		printf("%d, ", a[i]);
	}
	pthread_mutex_unlock(&lock);
	printf("\n");

	return NULL;
}