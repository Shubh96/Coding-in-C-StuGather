#include<stdio.h>

int main(){
	int num=5, i=1;
	
	while(i<=10)
	{
		printf("%d * %d = %d\n", num, i, num*i);
		i++;			//i++ is equivalent to i = i+1
	}
	
	return 0;
}

//Factorial: 5! = 5*4*3*2*1
//fact=1
//fact = fact*i

//fibonacci: 0 1 1 2 3 5 8 13 21 34 55

//take a number as input from user and print the tables until that number.
// num= 10; 2, 3, 4, 5, .... 10
