/**
#include <stdio.h>
#include <stdlib.h>


typedef struct TreeNode{
	int data;
	struct TreeNode *left,* right ;
}Node;

#define MAX 100
typedef Node* element;
typedef struct QueueType{
	element data[MAX];
	int front, rear;
}Queue;
int isFull(Queue* q){ return q->front == (q->rear+1)%MAX; }
int isEmpty(Queue* q){ return q->front == q->rear; }
void initQueue(Queue* q){ q->front =0; q->rear = 0; }
void printQueue(Queue* q){ 
	printf("QUEUE(front = %d, rear = %d)", q->front, q->rear);
	if(!isEmpty(q)){
		int i = q->front;
		do{
			i = (i+1)%MAX;
			printf("%d | ", q->data[i]);
			if(i == q->rear) 
				break;
		}while(i == q->front);
	}
	printf("\n");
}
void enqueue(QueueType *q, element Node){
	q->rear = (q->rear+1)%MAX;
	q->data[q->rear] = Node;
}
element dequeue(Queue *q){
	q->front = (q->front+1)%MAX;
	return q->data[q->front];
}

void level_order(Node* ptr){
	Queue q;
	initQueue(&q);

	if(ptr ==NULL) return;

	enqueue(&q, ptr);
	while(1){
		ptr = dequeue(&q);
		printf(" [%d] ", ptr->data);
		if(ptr->left)
			enqueue(&q, ptr->left);
		if(ptr->right)
			enqueue(&q, ptr->right);
	}

}

void main(){
	Node n1 = {1, NULL, NULL};
	Node n2 = {4, &n1, NULL};
	Node n3 = {16, NULL, NULL};
	Node n4 = {25, NULL, NULL};
	Node n5 = {20, &n3, &n4};
	Node n6 = {15, &n2, &n5};
	Node* n = &n6;

	level_order(n);
}
**/