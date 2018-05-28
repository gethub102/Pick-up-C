#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
	int value;
	struct _node * left;
	struct _node * right;
} Node;

/* free all the nodes in the tree stored under the node leaf */
void destory_tree(Node* leaf);

/* insertion the node */
void insert(int value, Node ** leaf);

/* search the node */
Node *search(int value, Node *leaf);

int main(void) {


	return 0;
}

void destory_tree(Node* leaf) {
	if (leaf == NULL) 
		return;
	destory_tree(leaf->left);
	destory_tree(leaf->right);
	free(leaf);
}

void insert(int value, Node ** leaf) {
	if (*leaf == NULL) {
		*leaf = (Node*) malloc(sizeof(Node));
		(*leaf)->value = value;
		(*leaf)->left = NULL;
		(*leaf)->right = NULL;
	} else if (value < (*leaf)->value) {
		insert(value, &(*leaf)->left);
	} else if (value > (*leaf)->value) {
		insert(value, &(*leaf)->right);
	}
}

Node *search(int value, Node *leaf) {
	if (leaf != NULL) {
		if (value == leaf->value) {
			return leaf;
		} else if (value < leaf->value) {
			return search(value, leaf->left);
		} else if (value > leaf->value) {
			return search(value, leaf->right);
		}
	} else {
		return NULL;
	}
}
