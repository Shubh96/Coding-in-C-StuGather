#include<stdio.h>
#include<stdlib.h>
int main(){
	//break, continue, goto illustration
	int i;
	
	/*for(i=0; i<10; i++){
		printf("\n%d", i);
		
		if(i==5){
			printf("\nbreak encountered....");
			break;
		}
		
		printf(" still in the loop");
	}
	
	for(i=0; i<10; i++){
		printf("\n%d", i);
		
		if(i==5){
			printf(" continue encountered....");
			continue;
		}
		
		printf(" still in the loop");
	}
	
	for(i=0; i<10; i++){
		printf("\n%d", i);
		
		if(i==5){
			goto A;
		}
		
		printf(" still in the loop");
	}
	
	A: printf(" Jumping over the loop");*/
	
	int choice;
	scanf("%d", &choice);
	
	switch(choice){
		case 1: printf("Choice is 1");
				break;				//fall-through
				
		case 2: printf("Choice is 2");
				break;
				
		case 3: printf("Choice is 3");
				break;
		
		default: printf("Wrong choice");
				exit(0);		
	}
	
	return 0;
}
