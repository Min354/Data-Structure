/*
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct StackNode{
	element data;
	struct StackNode *link;
}Node;
typedef struct LinkedStackType{
	struct StackNode *top;
}LST;
void init(LST *s){
	s->top = NULL;
}
int isEmpty(LST *s){
	return (s->top == NULL);
}
void push(LST *s, element item){
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = item;
	node->link = s->top;
	s->top = node;
}
element pop(LST *s){
	if(isEmpty(s)){ fprintf(stderr, "EMPTY"); exit(1); }
	Node* pop;
	pop = s->top;
	int data = pop->data;
	s->top = s->top->link;

	return data;
}
void sprint(LST *s){
	for(Node* p=s->top; p!=NULL; p=p->link)
		printf("%d->", p->data);
	printf("NULL\n");
}
void main(){
	LST s;
	init(&s);
	for(int i=0; i<5; i++){
		push(&s, i);
		sprint(&s);
	}
	for(int i=0; i<5; i++){
		pop(&s);
		sprint(&s);
	}
}
*/