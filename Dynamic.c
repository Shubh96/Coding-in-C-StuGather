#include<stdio.h>
#include<stdlib.h>

void main(){
	int csize, msize, i, *cptr, *mptr;
	
	printf("USING MALLOC\n");
	
	printf("Enter the size: ");
	scanf("%d", &msize);
	
	mptr = (int*)malloc(msize*sizeof(int));
	
	for(i=0; i<msize; i++){
		printf("Enter value %d: ", (i+1));
		scanf("%d", &mptr[i]);
	}
	
	for(i=0; i<msize; i++){
		printf("\nValue[%d]: %d", (i+1), mptr[i]);
	}
	free(mptr);
	
	printf("\nUSING CALLOC\n");
	
	printf("Enter the size: ");
	scanf("%d", &csize);
	
	cptr = (int*)calloc(csize,sizeof(int));
	
	for(i=0; i<csize; i++){
		printf("Enter value %d: ", (i+1));
		scanf("%d", &cptr[i]);
	}
	
	for(i=0; i<csize; i++){
		printf("Value[%d]: %d", (i+1), cptr[i]);
	}
	
	free(cptr);
}
