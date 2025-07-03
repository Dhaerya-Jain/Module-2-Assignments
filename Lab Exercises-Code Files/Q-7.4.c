#include<stdio.h>
/*
Q-7.4. WAP to accept 5 numbers from user and display in reverse order using for
loop and array.
*/
int main()
{
	int a[5],i;
	
	printf("Enter any 5 Numbers of your choice:\n");
	for(i=1;i<=5;i++)
	{
		printf("\nEnter number %d = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Numbers in reverse order:\n");
	for(i=5;i>=1;i--)
	{
		printf("\n%d ",a[i]);
	}
	return 0;
}
