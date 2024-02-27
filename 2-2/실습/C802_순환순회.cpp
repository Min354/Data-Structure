/**
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct TreeNode{
	element data;
	struct TreeNode *left,* right ;
}Node;
void preorder(Node* t){
	if(t==NULL) return;
	printf("%d ", t->data);
	preorder(t->left);
	preorder(t->right);
}
void inorder(Node* t){
	if(t==NULL) return;
	preorder(t->left);
	printf("%d ", t->data);
	preorder(t->right);
}
void postorder(Node* t){
	if(t==NULL) return;
	preorder(t->left);
	preorder(t->right);
	printf("%d ", t->data);
}
void main(){
	
	Node n1 = {1, NULL, NULL};
	Node n2 = {4, &n1, NULL};
	Node n3 = {16, NULL, NULL};
	Node n4 = {25, NULL, NULL};
	Node n5 = {20, &n3, &n4};
	Node n6 = {15, &n2, &n5};
	Node* n = &n6;
	preorder(n);
	inorder(n);
	postorder(n);
}
**/