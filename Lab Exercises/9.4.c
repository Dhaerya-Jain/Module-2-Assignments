#include<stdio.h>
/*
Q-9.4. Find max element from the array.
*/
int main()
{
	int a[100],i,n;
	printf("\nEnter the number of terms in array = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Your array is :-\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	int max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("\nThe maximum element of the array is = %d",max);
	return 0;
}
