#include<stdio.h>

void main(){
	int a = 11, b= 10;
	
	if(a>b){
		printf("a = %d is greater", a);
	}
	else if(b>a){
		printf("b = %d is greater", b);
	}
	else{
		printf("a and b are equal");
	}
}
