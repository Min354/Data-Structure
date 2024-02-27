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


int checkMatching(const char *p){
	StackType s;
	char ch, och;
	int n = strlen(p);
	init_stack(&s);

	for(int i=0; i<n; i++){
		ch = p[i];
		switch(ch){
		case '(': case '[': case '{': 
			push(&s, ch);
			break;

		case ')': case ']': case '}': 
			if(is_empty(&s)) return 0;
			else{
				och = pop(&s);
				if((och=='(' && ch!=')')||
					(och=='[' && ch!=']')||
					(och=='{' && ch!='}'))
					return 0;
				break;
			}
		}
	}
	if(!is_empty(&s))
		return 0;
	return 1;
}
void main(){
	char *p = "{ A[{i+1}] = 0; }";
	if(checkMatching(p) == 1)
		printf("%s success\n", p);
	else
		printf("%s fail\n", p);
}
*/