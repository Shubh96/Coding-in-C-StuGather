#include<stdio.h>
#include<stdlib.h>

void main(int argc, char *argv[]){	//argc: argument counter; argv: argument variable
	int i, num;

	num = atoi(argv[1]);				//argument to integer
	
	printf("%d\n", num);
	
	for(i=0; i<argc; i++){
		printf("%s\n", argv[i]);
	}
}