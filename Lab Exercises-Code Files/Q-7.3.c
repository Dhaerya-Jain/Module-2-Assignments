#include<stdio.h>
#include<math.h>
/*
Q-7.3. Program of Armstrong Number in C Using For Loop & While Loop.
*/
int main()
{
	int num,digit=0,i,power,rem,sum=0;
	printf("\nEnter any number = ");
	scanf("%d",&num);
	int temp=num;
	int copy=num;
	
	while(num!=0)
	{
		num=num/10;
		digit++;
	}
	for(i=1;i<=digit;i++)
	{
		rem=temp%10;
		power= pow(rem,digit);
		sum= sum + power;
		temp= temp/10;
	}
	if(sum==copy)
	{
		printf("\n%d is an armstrong number",copy);
	}
	else
	{
		printf("\n%d is not an armstrong number",copy);
	}
	return 0;
}
