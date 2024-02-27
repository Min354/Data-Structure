
#define _CRY_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
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
        fprintf(stderr, "���� ��ȭ ����\n");
		return;
    }
    else
        s->data[++(s->top)] = item;
}
element pop(StackType *s){
    if(isEmpty(s)){
        fprintf(stderr, "���� ���� ����\n");
        exit(1);
    }
    else
        return s->data[(s->top)--];
}
element peek(StackType *s){
    if(isEmpty(s)){
        fprintf(stderr, "���� ���� ����\n");
        exit(1);
    }
    else
        return s->data[s->top];
}

int main(void){
	StackType s;
	int size;
	int array [MAX_STACK_SIZE];
    int i;
    initStack(&s);

    printf("���� �迭�� ũ��: ");
    scanf("%d", &size);

    printf("������ �Է��Ͻÿ�: ");
    for(i=0; i<size; i++){
         scanf("%d", &array[i]);
         push(&s, array[i]);
    }

    printf("������ ���� �迭: ");
    for(i=0; i<size; i++){
         printf("%d ", pop(&s));
    }

    printf("\n");
    return 0;
}
