/*
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode{
	element data;
	struct ListNode *link;
}ListNode;
ListNode* insertFirst(ListNode* head, element data){
	ListNode* p = (ListNode*) malloc(sizeof(ListNode));
	p->data = data;
	if(head == NULL){
		head = p;
		p->link = head;
	}
	else{
		p->link = head->link;
		head->link = p;
	}
	return head;
}
ListNode* insertLast(ListNode* head, element data){
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = data;
	if(head == NULL){
		head = p;
		p->link = head;
	}
	else{
		p->link = head->link;
		head->link = p;
		head = p;
	}
	return head;
}

ListNode * deleteFirst(ListNode *head){
	if (head == NULL) return head;

	ListNode *p;
	p = head->link;
	head->link = p->link;
	free(p);
	return head;
}
ListNode * deleteLast(ListNode *head){
	if (head == NULL) return head;

	ListNode *p;
	p = head;
	while(head->link != p)
		head = head->link;
	head->link = p->link;
	free(p);
	return head;
}

void printList(ListNode *head){
	ListNode *p;
	if (head == NULL) return;
	p=head->link;
	do{
		printf("%d -> ", p->data);
		p = p->link;
	}while(p != head->link);
	printf("\n");
}
void main(){
	ListNode *head = NULL;


	head = insertLast(head, 20);
	head = insertLast(head, 30);
	head = insertLast(head, 40);
	head = insertFirst(head, 10);


	printList(head);

	head = deleteFirst(head);
	printList(head);
	head = deleteLast(head);
	printList(head);
}
*/