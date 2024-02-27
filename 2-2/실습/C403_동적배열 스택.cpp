/*¾ÈµÊ!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <stdio.h>
#include <stdlib.h>

#define MAX 100
typedef int element;
typedef struct{
	element *data;
	int size;
	int top;
}StackType;

void init_stack(StackType* s){ s->top = -1; s->size = 1; }
int is_empty(StackType* s){ return (s->top == -1);}
int is_full(StackType* s){ return (s->top == (s->size)-1); }
void push(StackType* s, element e){
	if(is_full(s) || is_empty(s)){ 
		s->size *= 2; 
		s->data = (element*)realloc(s->data, s->size * sizeof(element));
	}
	s->data[++(s->top)] = e;
}
element pop(StackType* s){
	if(is_empty(s)){ fprintf(stderr, "empty"); return 0;}
	else { return s->data[(s->top)--];}
}
element peek(StackType* s){ return  s->data[(s->top)];}

void main(){
	StackType *s;
	s = (StackType *)malloc(sizeof(StackType));
	init_stack(s);

	for(int i=0; i<5; i++)
		push(s, i);
	for(int i=0; i<5; i++)
		printf("%d\n",pop(s));
	free(s);
}
*/