
#include <stdio.h>
#include <stdlib.h>

//단순 연결 리스트ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ//
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

//연습 6-13ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ//
void search_delete_list(ListNode *head, element x){
	if(head==NULL) 
		return;
	if(head->data==x)
		head = deleteFirst(head);
	for(ListNode *p=head; (p!=NULL)&&(p->link!=NULL); p=p->link){ //조건문 순서주의(p->link가 없는 경우 오류 발생)
		if(p->link->data == x)
			deleteNode(head, p);
	}
	printList(head); //head 반환을 안 하므로 삭제 결과를 함수 안에서 출력
}
//연습 6-15ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ//
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
//연습 6-18ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ//
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
//원형 연결 리스트ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ//
//element와 ListNode는 단순 연결 리스트와 동일
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
//insertNode는 단순 연결 리스트와 동일
//delete는 단순 연결 리스트와 동일한가?
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

//연습 7-4ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ//
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
void main_과제2 (){
	
	//단순 연결 리스트
	ListNode *head = NULL;
	ListNode *head2 = NULL;
	/*
	for(int i=0; i<5; i++){
	head = insertFirst(head, i);
	printList(head);
	}

	//연습 6-13
	printf("4을 찾아서 삭제\n");
	search_delete_list(head, 4);
	
	//연습 6-15
	printf("min: %d\n", get_min(head));
	printf("max: %d\n", get_max(head));
	
	//연습 6-18
	merge_list(head, head, head2);
	
	//원형 연결 리스트
	ListNode *head = NULL;
	
	for(int i=0; i<5; i++){
	head = insert_first(head, i);
	print_list(head);
	}
	printf("NULL\n");
	*/
	//연습 7-4
	printf("size: %d\n", get_size(head));
	
}
