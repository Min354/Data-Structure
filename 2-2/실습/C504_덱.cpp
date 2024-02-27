/*
#include <stdio.h>
#include <stdlib.h>
#define MAX 6

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
int isFull(QueueType *q){
	return q->front == (q->rear+1);
}
int isEmpty(QueueType *q){
	return q->front == q->rear;
}
void initQueue(QueueType *q){
	q->rear = 0;
	q->front = 0;
}
void printQueue(QueueType *q){
	printf("QUEUE(front = %d  rear = %d) = ", q->front, q->rear);
	if(!isEmpty(q)){
		int i = q->front;
		while(1){
			i = (i+1)%MAX;
			printf("%d | ", q->data[i]);
			if(i == q->rear) 
				break;
		}
	}
	printf("\n");
}
void enqueue(QueueType *q, element data){
	if(isFull(q)){
		error("Full");
		return;
	}
	q->rear = (q->rear+1)%MAX;
	q->data[q->rear] = data;
}
void addFront(QueueType *q, element data){
	if(isFull(q)){
		error("FULL");
		return;
	}
	q->data[q->front] = data;
	q->front = (q->front + MAX -1)%MAX;
}
int dequeue(QueueType *q){
	if(isEmpty(q)){
		error("Empty");
		return -1;
	}
	q->front = (q->front+1)%MAX;
	return q->data[q->front];
}
int deleteRear(QueueType *q){
	if(isEmpty(q)){
		error("Empty");
		return -1;
	}
	int data = q->data[q->rear];
	q->rear = (q->rear + MAX -1)%MAX;
	return data;
}

void main(){
	QueueType q;

	initQueue(&q);

	for(int i=0; i<5; i++){
		addFront(&q, i);
		printQueue(&q);
	}
	for(int i=0; i<7; i++){
		deleteRear(&q);
		printQueue(&q);
	}
}
*/