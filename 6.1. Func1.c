#include<stdio.h>

int add(int a, int b){
	int sum = 0;
	
	sum = a + b;
	
	return sum;
}

void main(){
	int a= 10, b= 30;
	
	printf("%d", add(a,b));		//passing the values of a and b to the add() func
}
