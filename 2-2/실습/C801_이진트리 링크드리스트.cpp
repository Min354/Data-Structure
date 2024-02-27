/**
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct TreeNode{
	element data;
	struct TreeNode * right, *left;
}Node;
void main(){
	Node *n1, *n2, *n3;
	n1 = (Node*)malloc(sizeof(Node));
	n2 = (Node*)malloc(sizeof(Node));
	n3 = (Node*)malloc(sizeof(Node));

	n1->data = 10;
	n1->left = n2;
	n1->right = n3;

	n2->data = 20;
	n2->left = NULL;
	n2->right = NULL;

	n3->data = 30;
	n3->left = NULL;
	n3->right = NULL;

}
**/