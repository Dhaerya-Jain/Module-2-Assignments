#include<stdio.h>
/*
Q-7.2. Calculate the Sum of Natural Numbers Using the While Loop.
*/
int main()
{
	int num,i,sum=0;
	printf("\nEnter the number of terms of which sum you want = ");
	scanf("%d",&num);
	
	i=1;
	while(i<=num)
	{
		sum = sum + i;
		i++;
	}
	printf("\n The sum of numbers till %d is = %d",num,sum);
	return 0;
}
