/*
#include <stdio.h>
#include <stdlib.h>

#define MAX 100
typedef int element;
element stack[MAX];
int top=-1;

int is_empty(){ return (top == -1);}
int is_full(){ return (top == (MAX-1)); }
void push(element data){
	if(is_full()){ fprintf(stderr, "full"); return;}
	else stack[++top] = data;
}
element pop(){
	if(is_empty()){ fprintf(stderr, "empty"); return 0;}
	else return stack[top--];
}
element peek(){ return stack[top];}

void main(){
	for(int i=0; i<5; i++)
		push(i);
	for(int i=0; i<5; i++)
		printf("%d\n",pop());
}
*/