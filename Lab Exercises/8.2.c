#include<stdio.h>
/*
Q-8.2. WAP to find factorial using recursion.
*/

int calfac(int n);

int main()
{
	int n;
	printf("\nEnter the number of which factorial has to be found = ");
	scanf("%d",&n);
	
	if(n<0)
	{
		printf("\nThe factorial of negetive integers do not occur.");
	}
	
	printf("\nFactorial of %d is = %d",n,calfac(n));
	return 0;
}

int calfac(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n * calfac(n-1);
	}
}
