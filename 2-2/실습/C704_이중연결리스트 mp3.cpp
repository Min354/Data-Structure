/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char element[100];
typedef struct DListNode{
	element data;
	struct DListNode *llink;
	struct DListNode *rlink;
}DListNode;
DListNode * current;

void init(DListNode* head){
	head->rlink = head;
	head->llink = head;
}
void dinsert(DListNode* before, const char* ch){
	DListNode* node = (DListNode* )malloc(sizeof(DListNode));
	strcpy(node->data, ch);
	node->rlink = before->rlink;
	node->llink = before;
	before->rlink->llink = node;
	before->rlink = node;
}
void ddelete(DListNode* head, DListNode* removed){
	if(removed == head) return;
	removed->llink->rlink = removed->rlink;
	removed->rlink->llink = removed->llink;
	free(removed);
}
void dprint(DListNode* head){
	DListNode* p;
	for(p=head->rlink; p!=head; p=p->rlink){
		if(p==current)
		{printf("%<-| |#%s#| |-> ", p->data); continue;}
		else
		{printf("%<-| |%s| |-> ", p->data); continue;}
	}
	printf("\n");
}
void main(){
	char ch;
	DListNode *head = (DListNode*)malloc(sizeof(DListNode));
	init(head);

	dinsert(head, "N1");
	dinsert(head, "N2");
	dinsert(head, "N3");
	
	current = head->rlink;
	dprint(head);

	do{
		printf("\n(<, >, q): ");
		ch = getchar();
		if(ch == '<'){
			current = current->llink;
			if(current == head)
				current = current->llink;
		}
		else if(ch == '>'){
			current = current->rlink;
			if(current == head)
				current = current->rlink;
		}
		dprint(head);
		getchar();  //°ø¹é¸Ô±â
	} while(ch != 'q');
}
*/