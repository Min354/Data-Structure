#include <stdio.h>
#include <stdlib.h>
void hanoi_tower(int n, char from, char tmp, char to){
	if(n==1)
		printf("%d -> %c to %c\n", n, from, to);
	else{
		hanoi_tower(n-1, from, to, tmp);
		printf("%d -> %c to %c\n", n, from, to);
		hanoi_tower(n-1, tmp, from, to);
	}
}
void main_C203(){
	hanoi_tower(4, 'A', 'B', 'C');
}