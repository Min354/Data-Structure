#include <stdio.h>
#include <stdlib.h>
#define MAX 101

typedef struct {
	int degree;
	float coef[MAX];
}polynomial;
void printPoly(polynomial *p){
	for(int i=0; i<p->degree; i++)
		printf("%3.1f^%d + ", p->coef[i], p->degree-i);
	printf("%3.1f \n", p->coef[p->degree]);
}
void addPoly(polynomial *a, polynomial *b, polynomial *c){
	int Apos=0, Bpos=0, Cpos=0;
	int ad = a->degree, bd = b->degree;
	c->degree = ((a->degree > b->degree) ? a->degree : b->degree);

	while(Apos<=a->degree && Bpos<=b->degree){
		if(ad>bd){
			c->coef[Cpos++] = a->coef[Apos++];
			ad--;
		}
		else if(ad<bd){
			c->coef[Cpos++] = b->coef[Bpos++];
			bd--;
		}
		else{
			c->coef[Cpos++] = a->coef[Apos++]+ b->coef[Bpos++];
			ad--; bd--;
		}
	}
}
void main_C301(){
	polynomial a = {5, {3, 6, 0, 0, 0, 10}};
	polynomial b = {4, {7, 0, 5, 0, 1}};
	polynomial c;
	printPoly(&a);
	printPoly(&b);
	addPoly(&a, &b, &c);
	printPoly(&c);
}
