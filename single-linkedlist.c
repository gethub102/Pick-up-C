#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int value;
	struct node * next;
} Node;

void display(Node *head);

void concat(Node *a, Node *b);

int main(void) {

	Node * head, *prev, *p;
	int n, i;
	printf("number of elements: ");
	scanf("%d", &n);
	head = NULL;
	for (i = 0; i < n; i++) {
		p = (Node *)malloc(sizeof(Node));
		scanf("%d", &p->value);
		p->next = NULL;
		if (head == NULL) {
			head = p;
		}
		else 
			prev->next = p;
		prev = p;
	}

	display(head);

	return 0;
}

void display(Node *head) {
	Node *tmp = head;
	while (tmp != NULL) {
		printf("%d ", tmp->value);
		tmp = tmp->next;
	}
	printf("\n");
}

void concat(Node *a, Node *b) {
	if (a != NULL && a != NULL) {
		if (a->next == NULL) {
			a->next = b;
		} else {
			concat(a->next, b);
		}
	} else {
		printf("a | b is NULL\n");
	}
}