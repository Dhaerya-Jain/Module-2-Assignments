#include<stdio.h>
/*
Q-8.1. Write a C program that calculates the factorial of a number using a function.
Include function declaration, definition, and call.
*/

int calfac(int n);

int main()
{
	int n,fact;
	printf("\nEnter the number of which factorial has to be found = ");
	scanf("%d",&n);
	
	if(n<0)
	{
		printf("\nThe factorial of negetive integers do not occur.");
	}
	if(n==0 || n==1)
	{
		printf("\nThe factorial is 1.");
	}
	printf("\nFactorial of %d is = %d",n, calfac(n));
	return 0;
}

int calfac(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
	fact = fact * i;
	}
	return fact;
}
