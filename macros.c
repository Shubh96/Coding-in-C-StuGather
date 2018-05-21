/*#include<stdio.h>
//#include<stdlib.h>

#define SIZE 5

void main(){
	int i;
	
	for(i=0; i<SIZE; i++)						//for(i=0; i<5; i++)
		printf("Iteration %d\n", i);
}*/

/*#include<stdio.h>
#include<stdlib.h>

#define square(x) (x*x)

void main(int argc, char *argv[]){
	int side = atoi(argv[1]);
	
	printf("int side = %d\n", side);
	printf("Area: %d\n", square(side));		//printf("Area: %d\n", x*x);
}*/

/*====================================================================================
#include<stdio.h>
#include<stdlib.h>

#define mult(x,y) (x*y)

void main(){
	
	printf("Value = %d\n", mult(3,2));
}*/


/*====================================================================================
#include<stdio.h>
#include<stdlib.h>

#define mult(x,y) (x*y)			//3*3*2

void main(){
	
	printf("Value = %d\n", mult(3*3,2));
}*/

/*====================================================================================
#include<stdio.h>
#include<stdlib.h>

#define mult(x,y) (x*y)			//3+3*2=9

void main(){
	
	printf("Value = %d\n", mult(3+3,2));	//printf("Value = %d\n", (3+3*2));
}
*/

/*====================================================================================
#include<stdio.h>
#include<stdlib.h>

#define mult(x,y) ((x)*y)				//(3+3)*2

void main(){
	
	printf("Value = %d\n", mult(3+3,2));	//printf("Value = %d\n", ((3+3)*2));
}*/