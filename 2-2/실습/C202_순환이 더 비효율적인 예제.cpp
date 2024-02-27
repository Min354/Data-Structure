#include <stdio.h>
#include <stdlib.h>
int fib(int n){
	if(n==0) return 0;
	else if(n==1) return 1;
	else return fib(n-1)+(n-2);
}//¼øÈ¯
int fib_iter(int n){
	if(n==0) return 0;
	else if(n==1) return 1;

	int fir = 0;
	int sec = 1;
	int result = 0;
	for(int i=2; i<n; i++){
		result = fir+sec;
		fir = sec;
		sec = result;
	}
	return result;
}
void main_C202 (){
	int num = fib_iter(7);
	printf("%d\n", num);
}