
#define _CRY_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX_STACK_SIZE 100

typedef char element;
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
void main(void){
	int letter_count=0;
	char top;
	char line[102];
	line[101] = '0';
	StackType s;
	initStack(&s);

	printf("문자열: ");
	gets_s(line, 100);

	for(int i=0; line[i]; i++){
		line[i] = tolower(line[i]);
	}

	printf("압축된 문자열: ");
	for(int i=0; i<strlen(line); i++){
		push(&s, line[i]);
		letter_count++;
		if(peek(&s)!=line[i+1]){
			printf("%d%c", letter_count, line[i]);
			letter_count = 0;
		}
	}
	printf("\n");
}
