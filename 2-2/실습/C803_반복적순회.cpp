/**
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct TreeNode{
	element data;
	struct TreeNode *left,* right ;
}Node;

#define SIZE 100
int top = -1;
Node *stack[SIZE];

void push(Node *root){
	stack[++top] = root;
}
Node* pop(){
	Node *root;
	root = stack[top--];
	return root;
}
void inorderIter(Node * root){
	while(1){
		for(; root; root = root->left)
			push(root);
		root = pop();
		if(!root) break;
		printf("[%d]", root->data);
		root = root->right;
	}
}
void main(){
	Node n1 = {1, NULL, NULL};
	Node n2 = {4, &n1, NULL};
	Node n3 = {16, NULL, NULL};
	Node n4 = {25, NULL, NULL};
	Node n5 = {20, &n3, &n4};
	Node n6 = {15, &n2, &n5};
	Node* n = &n6;

	inorderIter(n);
}
**/