#include<stdio.h>

/*void swap(int *a, int *b){
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}*/

void main(){
	int a = 10, b = 30, i;
	int *p[2];
	
	p[0] = &a;
	p[1] = &b;
	
	for(i=0; i<2; i++){
		printf("\np[%d]: %d \t", i, *p[i]);		//*(p[0])
		printf("p[%d]: %d", i, *(*(p+i)));
	}
	
	/*printf("BEFORE SWAPPING:");
	printf("\na = %d", a);
	printf("\nb = %d", b);
	
	swap(&a, &b);
	
	printf("\n\nAFTER SWAPPING:");
	printf("\na = %d", a);
	printf("\nb = %d", b);*/
}
