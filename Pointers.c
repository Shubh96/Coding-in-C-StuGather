#include<stdio.h>

void main(){
	int a = 5, b = 7;
	int *pa, *pb, **dp;
	
	pa = &a;						//&a is address of a
	pb = &b;						//&b is address of b
	dp = &pa;
	
	printf("a = %d", a);
	printf("\n&a = %d", &a);
	
	printf("\n\nb = %d", b);
	printf("\n&b = %d", &b);
	
	printf("\n\n*pa = %d", *pa);	//*pa = *(&a)
	printf("\npa = %d", pa);
	
	printf("\n\n*pb = %d", *pb);
	printf("\npb = %d", pb);
	
	printf("\n\n&pa = %d", &pa);
	printf("\ndp = %d", dp);
	
	printf("\n\n*dp = %d", *dp);	//dp = &pa  *dp = *(&pa)	**dp = *(*(&pa))
																//**dp = *(&a)
	printf("\n**dp = %d", **dp);
	
	printf("\n\npa = %d", pa);
	pa++;
	printf("\n\npa = %d", pa);
	
	pa--;
	printf("\n\npa = %d", pa);
	
	if(pa == pb)
		printf("\n\nequal");
	else
		printf("\nunequal");
}
