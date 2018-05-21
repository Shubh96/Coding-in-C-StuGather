#include<stdio.h>

int printCountry(int);

int printCountry(int a){
	int sum = 0;
	
	sum = ++a;
	printf("Inside add(): a=%d\n", a);
	return sum;
}

void main(){
	int a= 10;
	
	printf("%d", printCountry(a));		//passing the values of a and b to the add() func
	printf("\nIn main(): a=%d", a);
}
