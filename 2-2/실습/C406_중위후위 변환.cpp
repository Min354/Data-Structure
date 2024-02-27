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

int prec(char c){
	switch(c){
	case '(': case ')': return 0;
	case '+': case '-': return 1;
	case '*': case '/': return 2;
	}
}
void infixToPostfix(char *exp){
	int len = strlen(exp);
	char ch;
	StackType s;
	init_stack(&s);
	for(int i=0; i<len; i++){
		ch = exp[i];
		switch(ch){
		case '+': case '-': case '*': case '/':
			while(!is_empty(&s) &&(prec(ch) <= prec(peek(&s))))
				printf("%c", pop(&s));
			push(&s, ch);
			break;
		case '(':
			push(&s, ch);
			break;
		case ')':
			ch = pop(&s);
			while(ch!='('){
				printf("%c", ch);
				ch = pop(&s);
			}
			break;
		default:
			printf("%c", ch);
		}
	}
	while(!is_empty(&s))
		printf("%c", pop(&s));
}

void main(){
	char *s = "(2+3)*4+9";
	printf("in: %s\n", s);
	printf("post: ");
	infixToPostfix(s);
	printf("\n");
}
*/