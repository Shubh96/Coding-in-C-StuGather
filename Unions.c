/*#include<stdio.h>

union union1{
	int var1, var2;
};

void main(){
	union union1 obj;
	
	obj.var1 = 20;
	printf("Var 1 = %d", obj.var1);
	obj.var2 = 30;
	printf("Var 2 = %d", obj.var2);
}*/

/*#include<stdio.h>

union union1{
	int var1, var2;
};

union union2{
	int var1;
	long long var2;
};

union union3{
	char var1;
	short int var2;
};

union union4{
	long var1;
	int var2[20];
};

void main(){
	union union1 obj1;
	union union2 obj2;
	union union3 obj3;
	union union4 obj4;
	
	printf("Size of Union 1: %d", sizeof(obj1));
	printf("\nSize of Union 2: %d", sizeof(obj2));
	printf("\nSize of Union 3: %d", sizeof(obj3));
	printf("\nSize of Union 4: %d", sizeof(obj4));
}*/

#include<stdio.h>

union union1{
	int var1, var2;
};

void main(){
	union union1 obj;
	union union1 *ptr = &obj;
	
	ptr->var1 = 20;
	printf("Var 1 = %d", ptr->var1);
	ptr->var2 = 30;
	printf("\nVar 2 = %d", ptr->var2);
}
