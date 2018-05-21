#include<stdio.h>

int fibonacci(int num){			//0	 1  1  2  3   5  8  13	
	if(num == 0)
		return 0;
	else if(num == 1)
		return 1;				//overlapping subproblems
	else
		return fibonacci(num-1) + fibonacci(num-2);		//dynamic programming
}

int main(){
	int num, i;
	
	printf("Enter the length of the series: ");
	scanf("%d", &num);
	
	for(i=0; i<num; i++){
		printf("%d\t", fibonacci(i));
	}
	return 0;
}
