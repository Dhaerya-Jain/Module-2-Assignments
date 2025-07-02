#include<stdio.h>
/*
Q-5.3. Write a C program to calculate profit and loss on a transaction.
*/
int main()
{
	int m,p;
	printf("\nEnter actual amount of the product = ");
	scanf("%d",&m);
	printf("\nEnter the amount at which you sold the product = ");
	scanf("%d",&p);
	
	if(m<p)
	{
		printf("\nYou sold the product in profit.");
	}
	else if(m==p)
	{
		printf("\nYou had no profit as well as no loss.");
	}
	else
	{
		printf("\nYou sold the product in loss.");
	}
	return 0;
}
