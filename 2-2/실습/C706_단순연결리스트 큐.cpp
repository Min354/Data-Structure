/*
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct QueueNode{
	element data;
	struct QueueNode *link;
}Node;
typedef struct LinkedQueueType{
	struct QueueNode *front;
	struct QueueNode *rear;
}LQT;
void init(LQT *q){
	q->front = NULL;
	q->rear = NULL;
}
int isEmpty(LQT *q){
	return (q->front == NULL && q->rear ==NULL);
}
void enqueue(LQT *q, element item){
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = item;
	node->link = NULL;
	if(isEmpty(q)) {
		q->front = node;
		q->rear = node;
	}
	else{
		q->rear->link = node;
		q->rear = node;
	}
}
element dequeue(LQT *q){
	if(isEmpty(q)){ fprintf(stderr, "EMPTY"); exit(1); }
	Node* deq;
	deq = q->front;
	int data = deq->data;
	q->front = q->front->link;
	if(q->front == NULL)
		q->rear = NULL;
	free(deq);
	return data;
}
void qprint(LQT *q){
	Node* p;
	printf("|");
	for(p=q->front; p!=NULL; p=p->link)
		printf(" %d |", p->data);
	printf(" NULL |\n");
}
void main(){
	LQT q;
	init(&q);
	for(int i=0; i<5; i++){
		enqueue(&q, i);
		qprint(&q);
	}
	for(int i=0; i<5; i++){
		dequeue(&q);
		qprint(&q);
	}
}
*/