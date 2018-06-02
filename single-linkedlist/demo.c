#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct people_tag {
	char first_name[16];
	char last_name[16];
	unsigned int age;
	struct people_tag *next;
} people_t;


int main(void) {

	people_t *head = NULL;
	people_t *new;
	people_t *list;

	char *name[] = {"Andy", "John", "Peter", "Raul", NULL};
	char *last[] = {"Mans", "Doe", "Mars", "Gonzales", NULL};
	unsigned int age[] = {22, 34, 25, 18, 0};

	int i = 0;
	while (name[i]) {
		new = (people_t*)malloc(sizeof(people_t));
		if (new == NULL) {
			perror("Unable to allocate memory");
			exit(1);
		}
		strcpy(new->first_name, name[i]);
		strcpy(new->last_name, last[i]);
		new->age = age[i];

		new->next = head;
		head = new;
		i++;
	}

	list = head;

	while (list != NULL) {
		printf("first_name = %s last_name = %s age = %d\n", list->last_name, list->last_name, list->age);
		list = list->next;
	}

	list = head;

	while (list != NULL) {
		head = list->next;
		free(list);
		list = head;
	}

	return 0;
}
