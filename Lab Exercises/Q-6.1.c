#include<stdio.h>
/*
Q-6.1. Write a C program to print numbers from 1 to 10 using all three types of loops
(while, for, do-while).
*/
int main()
{
	int i;
	
//For Loop::
	printf("\nNumbers from 1-10 using for loop:");
	for(i=1;i<=10;i++)
	{
		printf("\n%d ",i);
	}
//While Loop::
	printf("\nNumbers from 1-10 using while loop:");
	i=1;
	while(i<=10)
	{
		printf("\n%d ",i);
		i++;
	}
//Do-While Loop::
	printf("\nNumbers from 1-10 using do-while loop:");
	i=1;
	do
	{
		printf("\n%d",i);
		i++;
	}while(i<=10);
}
