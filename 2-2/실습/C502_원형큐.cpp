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
		do{
			i = (i+1)%MAX;
			printf("%d | ", q->data[i]);
			if(i == q->rear) 
				break;
		}while(i != q->front);
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
int dequeue(QueueType *q){
	if(isEmpty(q)){
		error("Empty");
		return -1;
	}
	q->front = (q->front+1)%MAX;
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