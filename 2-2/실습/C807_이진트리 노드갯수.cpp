/**
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct TreeNode{
	element data;
	struct TreeNode *left,* right ;
}Node;

int getNode(Node * t){
	if(t==NULL) return 0;
	return 1+getNode(t->left)+getNode(t->right);

}
void main(){
	
	Node n1 = {500, NULL, NULL};
	Node n2 = {200, NULL, NULL};
	Node n3 = {100, &n1, &n2};
	Node n4 = {50, NULL, NULL};
	Node n5 = {0, &n4, &n3};
	
	printf("%d    ", getNode(&n5));
}
**/