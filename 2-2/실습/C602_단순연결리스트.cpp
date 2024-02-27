/*
#include <stdio.h>
#include <stdlib.h>

#define MAX 100
typedef int element;
typedef struct ListNode{
	element data;
    struct ListNode *link;
}ListNode;
void error(char *message){
	fprintf(stderr, "%s\n", message);
	exit(1);
}
void init(ListNode *head){
	head = (ListNode *)malloc(sizeof(ListNode));
}
void printList(ListNode *head){
	for(ListNode *p=head; p!=NULL; p=p->link)
		printf("%d -> ", p->data);
	printf("NULL \n");
}
ListNode * insertFirst(ListNode *head, element data){
	ListNode *tmp = (ListNode *)malloc(sizeof(ListNode));
	tmp->data = data;
	tmp->link = head;
	head = tmp;
	return head;
}
ListNode * deleteFirst(ListNode *head){
	ListNode *tmp = (ListNode *)malloc(sizeof(ListNode));
	tmp = head;
	head = head->link;
	free(tmp);
	return head;
}
ListNode * insertA(ListNode *head, ListNode *pre, element data){
	ListNode *tmp = (ListNode *)malloc(sizeof(ListNode));
	tmp->data = data;
	tmp->link = pre->link;
	pre->link = tmp;
	return head;
}
ListNode * deleteA(ListNode *head, ListNode *pre){
	ListNode *tmp = (ListNode *)malloc(sizeof(ListNode));
	tmp = pre->link;
	pre->link = tmp->link;
	free(tmp);
	return head;
}

void main(){
	ListNode *head = NULL;

	for(int i=0; i<5; i++){
		head = insertFirst(head, i);
		printList(head);
	}
	for(int i=0; i<5; i++){
		head = deleteFirst(head);
		printList(head);
	}
}
*/