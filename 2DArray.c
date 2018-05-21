#include<stdio.h>

void main(){
	int array[3][3];// = {10, 20, 30, 40, 50, 60, 70, 80, 90};	//n elements
	int i, j;
	
	/*array[0][0] = 10;
	array[0][1] = 20;
	array[0][2] = 30;
	
	array[1][0] = 40;
	array[1][1] = 50;
	array[1][2] = 60;
	
	array[2][0] = 70;
	array[2][1] = 80;
	array[2][2] = 90;*/
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++)
		{
			printf("Enter Array[%d][%d]: ", i, j);
			scanf("%d", &array[i][j]);
		}
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Array[%d][%d]: %d\t", i, j, array[i][j]);
		}
		printf("\n");
	}
}
