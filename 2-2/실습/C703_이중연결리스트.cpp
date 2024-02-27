/*
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct DListNode{
	element data;
	struct DListNode *llink;
	struct DListNode *rlink;
} DListNode;

void dinsert(DListNode *before, element data){
	DListNode *newnode = (DListNode*)malloc(sizeof(DListNode));
	newnode->data = data;
	newnode->llink = before;
	newnode->rlink = before->rlink;
	before->rlink->llink = newnode;
	before->rlink = newnode;
}
void ddelete(DListNode* head, DListNode* removed){
	if(removed == head) return;
	removed->llink->rlink = removed->rlink;
	removed->rlink->llink = removed->llink;
	free(removed);
}
void init(DListNode* head){
	head->llink = head;
	head->rlink = head;
}
void printDlist(DListNode *head){
	DListNode *p;
	for(p=head->rlink; p != head; p=p->rlink){
		printf("%<-| |%d| |-> ", p->data);
	}
	printf("\n");
}
void main(){
	DListNode *head = (DListNode*)malloc(sizeof(DListNode));
	init(head);
	printf("insert node\n");
	for(int i=0; i<5; i++){
		dinsert(head, i);
		printDlist(head);
	}
	printf("delete node\n");
	for(int i=0; i<5; i++){
		ddelete(head, head->rlink);
		printDlist(head);
	}
	free(head);
}
*/