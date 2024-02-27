/*
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef int element;
typedef struct {
	int front;
	int rear;
	element data[MAX];
}QueueType;
void error(char * message){
	fprintf(stderr, "%s\n", message);
	exit(1);
}
void initQueue(QueueType *q){
	q->rear = -1;
	q->front = -1;
}
void printQueue(QueueType *q){
	for(int i=0; i<MAX; i++){
		if(i>q->rear || i<=q->front)
			printf("   | ");
		else
			printf("%d | ", q->data[i]);
	}
	printf("\n");
}
int isFull(QueueType *q){
	return q->rear == (MAX-1);
}
int isEmpty(QueueType *q){
	return q->front == q->rear;
}
void enqueue(QueueType *q, element data){
	if(isFull(q)){
		error("Full");
		return;
	}
	q->rear++;
	q->data[q->rear] = data;
}
int dequeue(QueueType *q){
	if(isEmpty(q)){
		error("Empty");
		return -1;
	}
	q->front++;
	return q->data[q->front];
}

void main(){
	int tmp=0;
	QueueType q;

	initQueue(&q);

	for(int i=1;i<6;i++){
		enqueue(&q, i*10);
		printQueue(&q);
	}

	for(int i=1;i<6;i++){
		tmp = dequeue(&q);
		printQueue(&q);
	}
}
*/