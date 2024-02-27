/**
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct TreeNode{
	element data;
	struct TreeNode *left,* right ;
}Node;

int evaluate(Node* t){
	if(t ==NULL) return 0;
	if(t->left ==NULL && t->right==NULL) return (t->data);
	int op1 = evaluate(t->left);
	int op2 = evaluate(t->right);
	printf("%d %c %d\n", op1, t->data, op2);

	switch(t->data){
	case '+': return op1+op2;
	case '-': return op1-op2;
	case '/': return op1/op2;
	case '*': return op1*op2;

	}
	return 0;
}
void main(){
	
	Node n1 = {1, NULL, NULL};
	Node n2 = {4, NULL, NULL};
	Node n3 = {'*', &n1, &n2};
	Node n4 = {16, NULL, NULL};
	Node n5 = {25, NULL, NULL};
	Node n6 = {'+', &n4, &n5};
	Node n7 = {'+', &n3, &n6};
	Node* n = &n7;
	
	printf("%d    ", evaluate(n));
}
**/