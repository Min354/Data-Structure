#include <stdio.h>
#include <stdlib.h>

double power(double x, int n){
	if(n == 0) 
		return 1;
	else if((n%2) == 0)
		return power(x*x, n/2);
	else 
		return x*power(x*x, (n-1)/2);
}
void main_C201(){
	int num = power(2, 10);
	printf("%d \n", num);
}