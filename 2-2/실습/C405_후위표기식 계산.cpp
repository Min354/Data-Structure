/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//배열 스택
#define MAX 100
typedef char element;
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

int eval(char *exp){
	int op1, op2, value, i;
	int len = strlen(exp);
	char ch;
	StackType s;
	init_stack(&s);
	for(i=0; i<len; i++){
		ch = exp[i];
		switch(ch){
		case '+':
			op2 = pop(&s); op1 = pop(&s);
			push(&s, op1+op2);
			break;
		case '-':
			op2 = pop(&s); op1 = pop(&s);
			push(&s, op1-op2);
			break;
		case '*':
			op2 = pop(&s); op1 = pop(&s);
			push(&s, op1*op2);
			break;
		case '/':
			op2 = pop(&s); op1 = pop(&s);
			push(&s, op1/op2);
			break;
		default:
			push(&s,  (ch - '0'));
		}
	}
	return pop(&s);
}

void main(){
	int result;
	printf("82/3-32*+ = ");
	result = eval("82/3-32*+");
	printf("%d\n", result);
}
*/