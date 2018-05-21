#include<stdio.h>

void main(){
	
	int a = 5, b = 8;
	
	printf("=======================ARITHMETIC OPERATORS======================\n");
	printf("a + b = %d\n", a+b);
	printf("a - b = %d\n", a-b);
	printf("a * b = %d\n", a*b);
	printf("a / b = %d\n", a/b);
	printf("a %% b = %d\n", a%b);
	
	printf("=======================RELATIONAL OPERATORS======================\n");
	printf("a > b = %d\n", a>b);
	printf("a < b = %d\n", a<b);
	printf("a == b = %d\n", a==b);
	printf("a != b = %d\n", a!=b);
	printf("a <= b = %d\n", a<=b);
	printf("a >= b = %d\n", a>=b);
	
	printf("=========================LOGICAL OPERATORS=======================\n");
	printf("a && b = %d\n", a&&b);
	printf("a || b = %d\n", a||b);
	printf("!a = %d\n", !a);
	
	printf("=========================ASSIGNMENT OPERATORS=======================\n");
	printf("a += b = %d\n", a+=b);
	printf("a -= b = %d\n", a-=b);
	printf("a *= b = %d\n", a*=b);
	printf("a /= b = %d\n", a/=b);
	printf("a %%= b = %d\n", a%=b);
	
	printf("=========================BITWISE OPERATORS=======================\n");
	printf("a & b = %d\n", a&b);
	printf("a | b = %d\n", a|b);
	printf("a ^ b= %d\n", a^b);		
	printf("~a = %d\n", ~a);
	printf("a<<2 = %d\n", a<<2);
	printf("a>>2 = %d\n", a>>2);
}
