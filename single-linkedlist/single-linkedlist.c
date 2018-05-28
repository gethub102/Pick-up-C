#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int value;
	struct node * next;
} Node;

void display(Node *head);

void concat(Node *a, Node *b);

Node* front(Node *head, int value);

void end(Node *head, int value);

void after(Node *a, int value);

void delete(Node *prev_node);

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

/* display the list begin with the head */
void display(Node *head) {
	Node *tmp = head;
	while (tmp != NULL) {
		printf("%d ", tmp->value);
		tmp = tmp->next;
	}
	printf("\n");
}

/* concat the list */
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

/* insertion in the front */
Node* front(Node *head, int value) {
	Node *p = (Node*) malloc(sizeof(Node));
	p->value = value;
	p->next = head;
	return p;
}

/* insertion at the end of list */
void end(Node *head, int value) {
	Node *p, *tmp;
	p = (Node*)malloc(sizeof(Node));
	p->value = value;
	p->next = NULL;
	tmp = head;
	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = p;
}

/* insertion after the node */
void after(Node *a, int value) {
	if (a->next != NULL) {
		Node *p = (Node*) malloc(sizeof(Node));
		Node *tmp = a;
		p->value = value;
		p->next = a->next;
		a->next = p;
	} else {
		printf("use end function to insertion\n");
	}
}

/* delete the node */
void delete(Node *prev_node) {
	Node* tmp = (Node*)malloc(sizeof(Node));
	tmp = prev_node->next;
	prev_node->next = tmp->next;
	free(tmp);
}
