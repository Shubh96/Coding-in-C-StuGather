#include<stdio.h>

void main(){
	int array[5];// = {10, 20, 30, 40, 50};		//n elements
	int i;
	
	/*array[0] = 10;
	array[1] = 20;
	array[2] = 30;
	array[3] = 40;
	array[4] = 50;*/
	
	for(i=0; i<5; i++){
		printf("Enter Array[%d]: ", i);
		scanf("%d", &array[i]);
	}
	
	for(i=0; i<5; i++){
		printf("Array[%d]: %d\t", i, array[i]);
	}
}
