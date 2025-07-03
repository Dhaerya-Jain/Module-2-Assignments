#include<stdio.h>
/*
Q-6.2. Write a program to take 10 no. Input from user find out below values: 
(a)How many Even numbers are there? 
(b)How many odd numbers are there? 
(c)Sum of even numbers?
(d)Sum of odd numbers?
*/
int main()
{
	int num,ec=0,oc=0,i,es=0,os=0;
	
	for(i=1;i<=10;i++)
	{
		printf("\n Enter number %d = ",i);
		scanf("%d",&num);
		
		if(num%2==0)
		{
			ec++;
			es = es + num;
		}
		else
		{
			oc++;
			os = os + num;
		}
	}
	printf("\nTotal even numbers = %d",ec);
	printf("\nTotal odd numbers = %d",oc);
	printf("\nSum of odd numbers = %d",os);
	printf("\nSum of even numbers = %d",es);
	return 0;
}
