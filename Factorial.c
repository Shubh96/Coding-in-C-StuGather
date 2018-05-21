#include<stdio.h>

int factorial(int num){				//5! = 5*4*3*2*1		0! = 1
	if(num == 0)
		return 1;
	else
		return num*factorial(num-1);	//5*4*3*2*1 = 120
}

int main(){
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	printf("Factorial of %d is %d ", num, factorial(num));
	
	return 0;
}
