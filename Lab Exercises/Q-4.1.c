#include<stdio.h>
/*
Q-4.1. Write a C program that accepts two integers from the user and performs arithmetic, relational,
and logical operations on them. Display the results.
*/				     	
int main()
{
	int a,b;
	printf("\nEnter the value of a = ");
	scanf("%d",&a);
	printf("\nEnter the value of b = ");
	scanf("%d",&b);
	
//Arithmetic operations:
	
	printf("\nThe addition of %d and %d is = %d",a,b,a+b);
	printf("\nThe subtraction of %d and %d is = %d",a,b,a-b);
	printf("\nThe multiplication of %d and %d is = %d",a,b,a*b);
	printf("\nThe division of %d and %d is = %d",a,b,a/b);
	printf("\nThe remainder of %d and %d is = %d",a,b,a%b);
	
//Relational/Comparision Operations:

	printf("\nThe relation a > b is %d",a>b);
	printf("\nThe relation a >= b is %d",a>=b);
	printf("\nThe relation a < b is %d",a<=b);
	printf("\nThe relation a <= b is %d",a<=b);
	printf("\nThe relation a != b is %d",a!=b);
	
//Logical Operations:

	printf("\nThe result of a>b && a>=b is %d",a>b && a>=b);
	printf("\nThe result of a>b || a>=b is %d",a>b || a>=b);
	printf("\nThe result of !a>b is %d",!a>b);
	
	return 0;
}

