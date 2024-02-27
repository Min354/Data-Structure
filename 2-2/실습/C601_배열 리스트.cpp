/*
#include <stdio.h>
#include <stdlib.h>

#define MAX 100
typedef int element;
typedef struct {
	element array[MAX];
	int size;
}ArrayListType;
void error(char *message){
	fprintf(stderr, "%s\n", message);
	exit(1);
}
void init(ArrayListType *L){
	L->size = 0;
}
int isEmpty(ArrayListType *L){
	return L->size==0;
}
int isFull(ArrayListType *L){
	return L->size == MAX;
}
element getEntry(ArrayListType *L, int pos){
	if(pos<0 || pos>L->size)
		error("position err");
	return L->array[pos];
}
void printList(ArrayListType *L){
	if(isEmpty(L))
		error("EMPTY");
	for(int i=0; i<L->size; i++)
		printf("%d -> ", L->array[i]);
	printf("\n");
}
void insertLast(ArrayListType *L, element data){
	if(isFull(L))
		error("FULL");
	L->array[L->size] = data;
	L->size++;	
}
void insertA(ArrayListType *L, int pos, element data){
	if(isFull(L))
		error("FULL");
	if(pos<0 || pos>L->size)
		error("position err");
	for(int i=(L->size-1); i>=pos; i--)
		L->array[i+1] = L->array[i];
	L->array[pos] = data;
	L->size++;	
}
element deleteA(ArrayListType *L, int pos){
	if(pos<0 || pos>L->size)
		error("position err");
	element data = L->array[pos];
	for(int i=pos; i<(L->size-1); i++)
		L->array[i] = L->array[i+1];
	L->size--;
	return data;
}

void main(){
	ArrayListType L;

	init(&L);
	for(int i=0; i<5; i++){
		insertA(&L, 0, i*10);
		printList(&L);
	}
	insertLast(&L, 44);
	printList(&L);
	deleteA(&L, 0);
	printList(&L);
}
*/