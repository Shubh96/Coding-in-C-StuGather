#include<stdio.h>

enum Week1{
	Sunday=5, Monday, Tuesday=10, Wednesday, Thursday, Friday, Saturday
};				//value of Nth flag = value of (N-1)th flag + 1

void main(){
	enum Week days;
	int i = Tuesday;
	
	printf("%d \t %d \t %d \t %d \t %d \t %d \t %d", Sunday, Monday, Tuesday, Wednesday,Thursday, Friday, Saturday);
	
	/*for(i=Sunday; i<=Saturday; i++){			//saturday = 14
		printf("%d\t", i);
	}*/
}
