//Structure padding

#include<stdio.h>

struct xyz{
	int a;				//4 bytes
	float c, f;			//4 byte
	char d, b;				//1 byte
	char e;
};

//	|4 bytes|1 byte|3 bytes|4 bytes|4 bytes|1 byte|3 bytes|
void main(){
	int size;
	struct xyz obj;					//structure variable or object
	
	size = sizeof(obj);
	
	printf("Size: %d", size);
}
