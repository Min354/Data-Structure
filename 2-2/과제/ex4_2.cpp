#define _CRY_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX_STACK_SIZE 100

typedef int element;
typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
} StackType;

void initStack(StackType *s){
    s -> top = -1;
}
int isEmpty(StackType *s){
    return(s->top == -1);
}
int isFull(StackType *s){
    return(s->top == (MAX_STACK_SIZE-1));
}
void push(StackType* s, element item){
    if(isFull(s)){
        fprintf(stderr, "스택 포화 에러\n");
		return;
    }
    else
        s->data[++(s->top)] = item;
}
element pop(StackType *s){
    if(isEmpty(s)){
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else
        return s->data[(s->top)--];
}
element peek(StackType *s){
    if(isEmpty(s)){
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else
        return s->data[s->top];
}


void gets_s(char* line, int size){
	scanf("%s", line);
}
void check_matching(char* line){
	StackType s;
	int i, chNum=0, n = strlen(line);
	initStack(&s);

	for (i=0; i<n; i++){
		switch(line[i]){
		case '(':
			chNum ++;
			push(&s, chNum);
			printf("%d", peek(&s));
			break;
		case ')':
			if(isEmpty(&s))
				return;
			else{
				printf("%d", pop(&s));
			}
			break;
		}
	}
}
int main(void){
	char line[101];
    printf("수식: ");
	gets_s(line, 100);
    check_matching(line);
	printf("\n");
    return 0;
}
