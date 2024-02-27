/**
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct TreeNode{
	element data;
	struct TreeNode *left,* right ;
}Node;

int calc(Node* t){
	if(t==NULL) return 0;
	if(t->right==NULL && t->left==NULL) return t->data;

	int op1 = calc(t->left);
	int op2 = calc(t->right);

	return(op1+op2+t->data );
}
void main(){
	
	Node n1 = {500, NULL, NULL};
	Node n2 = {200, NULL, NULL};
	Node n3 = {100, &n1, &n2};
	Node n4 = {50, NULL, NULL};
	Node n5 = {0, &n4, &n3};


	
	printf("%d    ", calc(&n5));
}
**/