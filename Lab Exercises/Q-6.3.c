#include<stdio.h>
/*
Q-6.3. WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
82746
*/
int main()
{
	int num=12345,rem,sum=0,i;
	printf("\n The number is = 12345");
	
	i=1;
	while(num!=0)
	{
		rem = num%10;
		sum = (sum*10) + rem;
		num = num/10;
		i++;
	}
	printf("\nThe reversed number is = %d",sum);
	return 0;
}

