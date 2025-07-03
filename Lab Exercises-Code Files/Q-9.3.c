#include<stdio.h>
/*
Q-9.3. Convert array into ascending and decsending order.
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
	
	asc(a,n);
	printf("Array in ascending order:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\n");
	
	desc(a,n);
	printf("Array in descending order:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\n");
	return 0;
}

//Function for Ascending Order:
void asc(int a[100], int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			 if (a[j]>a[j+1])
			 {
			 	temp=a[j];
			 	a[j]=a[j+1];
			 	a[j+1]=temp;
			 }
		}
	}
}
//Function for Descending Order:
void desc(int a[100], int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			 if (a[j]<a[j+1])
			 {
			 	temp=a[j];
			 	a[j]=a[j+1];
			 	a[j+1]=temp;
			 }
		}
	}
}
