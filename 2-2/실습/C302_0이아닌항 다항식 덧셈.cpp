#include <stdio.h>
#include <stdlib.h>
#define MAX 101

struct {
	float coef;
	int expon;
}terms[MAX] = {{8,3}, {7,1}, {1,0}, {10,3}, {3,2}, {1,0}};
int avail=6;
char compare(int a, int b){
	if(a>b) return '>';
	else if(a==b) return '=';
	else return '<';
}
void attach(float coef, int expon){
	if(avail>MAX){
		fprintf(stderr, "error");
		exit(1);
	}
	terms[avail].coef = coef;
	terms[avail].expon = expon;
	avail++;
}
void printPoly(int s, int e){
	for(s; s<e; s++)
		printf("%3.1fx^%d + ", terms[s].coef, terms[s].expon);
	printf("%3.1fx^%d\n", terms[e].coef, terms[e].expon);
}
void addPoly(int As, int Ae, int Bs, int Be, int *Cs, int *Ce){
	float tempcoef;
	*Cs = avail;
	while(As<=Ae && Bs<=Be){
		switch(compare(terms[As].expon, terms[Bs].expon)){
		case '>':
			attach(terms[As].coef, terms[As].expon);
			As++;
			break;
		case '=':
			tempcoef = terms[As].coef + terms[Bs].coef;
			if(tempcoef!=0)
				attach(tempcoef, terms[As].expon);
			As++; Bs++;
			break;
		case '<':
			attach(terms[Bs].coef, terms[Bs].expon);
			Bs++;
			break;
		}
	}
	for(;As<Ae;As++)
		attach(terms[As].coef, terms[As].expon);
	for(;Bs<Be;Bs++)
		attach(terms[Bs].coef, terms[Bs].expon);
	*Ce = avail-1;

}
void main_C302(){
	int As=0, Ae=2, Bs=3, Be=5;
	int Cs, Ce;
	printPoly(As,Ae);
	printPoly(Bs,Be);
	printf("------------------------\n");
	addPoly(As, Ae, Bs, Be, &Cs, &Ce);
	printPoly(Cs,Ce);
}