/*
#include <stdio.h>
#include <stdlib.h>

#define MAX 100
typedef int element;
typedef struct{
	element stack[MAX];
	int top;
}StackType;

void init_stack(StackType* s){ s->top = -1; }
int is_empty(StackType* s){ return (s->top == -1);}
int is_full(StackType* s){ return (s->top == (MAX-1)); }
void push(StackType* s, element data){
	if(is_full(s)){ fprintf(stderr, "full"); return;}
	else s->stack[++(s->top)] = data;
}
element pop(StackType* s){
	if(is_empty(s)){ fprintf(stderr, "empty"); return 0;}
	else return s->stack[(s->top)--];
}
element peek(StackType* s){ return  s->stack[(s->top)];}

void main(){
	StackType s;
	init_stack(&s);
	for(int i=0; i<5; i++)
		push(&s, i);
	for(int i=0; i<5; i++)
		printf("%d\n",pop(&s));
}
*/