
#include <stdio.h>
#include <stdlib.h>

//�ܼ� ���� ����Ʈ�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�//
typedef int element;
typedef struct ListNode{
	element data;
	struct ListNode *link;
}ListNode;
/*
ListNode* insertFirst(ListNode *head, int value){
	ListNode *p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->link = head;
	head =  p;
	return head;
}
ListNode* insertNode(ListNode *head, ListNode *pre, int value){
	ListNode *p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->link = pre->link;
	pre->link =  p;
	return head;
}
ListNode* deleteFirst(ListNode *head){
	ListNode *removed;
	if(head==NULL) 
		return NULL;
	removed = head;
	head = head->link;
	free(removed);
	return head;
}
ListNode* deleteNode(ListNode *head, ListNode *pre){
	ListNode *removed;
	removed = pre->link;
	pre->link = removed->link;
	free(removed);
	return head;
}
ListNode* printList(ListNode *head){
	for(ListNode *p=head; p!=NULL; p = p->link)
		printf("%d->", p->data);
	printf("NULL\n");
	return head;
}

//���� 6-13�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�//
void search_delete_list(ListNode *head, element x){
	if(head==NULL) 
		return;
	if(head->data==x)
		head = deleteFirst(head);
	for(ListNode *p=head; (p!=NULL)&&(p->link!=NULL); p=p->link){ //���ǹ� ��������(p->link�� ���� ��� ���� �߻�)
		if(p->link->data == x)
			deleteNode(head, p);
	}
	printList(head); //head ��ȯ�� �� �ϹǷ� ���� ����� �Լ� �ȿ��� ���
}
//���� 6-15�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�//
int get_min(ListNode *list){
	int min = list->data;
	for(ListNode *p=list->link; p!=NULL; p=p->link){
		if(min > p->data)
			min = p->data;
	}
	return min;
}
int get_max(ListNode *list){
	int max = list->data;
	for(ListNode *p=list->link; p!=NULL; p=p->link){
		if(max < p->data)
			max = p->data;
	}
	return max;
}
//���� 6-18�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�//
void merge_list(ListNode *a, ListNode *b, ListNode *c){
	ListNode *q;
	c = insertFirst(c, a->data);
	q=c;
	for(ListNode *p = a->link; p!=NULL; p=p->link){
		c = insertNode(c, q, p->data);
		q = q->link;
	}
	for(ListNode *p = b; p!=NULL; p=p->link){
		c = insertNode(c, q, p->data);
		q = q->link;
	}
	printList(c);
}
*/
//���� ���� ����Ʈ�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�//
//element�� ListNode�� �ܼ� ���� ����Ʈ�� ����
ListNode* insert_first(ListNode* head, int value){ 
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	if(head==NULL){
		head = p;
		p->link = head;
	}
	else{
		p->link = head->link;
		head->link = p;
	}
	return head;
}
ListNode* insert_last(ListNode* head, int value){
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	if(head==NULL){
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
//insertNode�� �ܼ� ���� ����Ʈ�� ����
//delete�� �ܼ� ���� ����Ʈ�� �����Ѱ�?
ListNode* delete_node(ListNode *head, ListNode *pre){
	ListNode *removed;
	removed = pre->link;
	pre->link = removed->link;
	if(head == removed)
		head = pre->link;
	free(removed);
	return head;
}
void print_list(ListNode* head){
	ListNode* p;

	if(head==NULL) return;

	p = head->link;

	do{
		printf("%d->", p->data);
		p->link;
	}while (p!= head->link);
}

//���� 7-4�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�//
int get_size(ListNode* head){
	ListNode* p;
	int i=0;
	if(head==NULL){
		return i;
	}
	for(p=head; p != head; p=p->link){
		i++;
	}
	return ++i;
}
void main_����2 (){
	
	//�ܼ� ���� ����Ʈ
	ListNode *head = NULL;
	ListNode *head2 = NULL;
	/*
	for(int i=0; i<5; i++){
	head = insertFirst(head, i);
	printList(head);
	}

	//���� 6-13
	printf("4�� ã�Ƽ� ����\n");
	search_delete_list(head, 4);
	
	//���� 6-15
	printf("min: %d\n", get_min(head));
	printf("max: %d\n", get_max(head));
	
	//���� 6-18
	merge_list(head, head, head2);
	
	//���� ���� ����Ʈ
	ListNode *head = NULL;
	
	for(int i=0; i<5; i++){
	head = insert_first(head, i);
	print_list(head);
	}
	printf("NULL\n");
	*/
	//���� 7-4
	printf("size: %d\n", get_size(head));
	
}
