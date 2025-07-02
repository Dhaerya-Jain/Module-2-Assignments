#include<stdio.h>
#include<string.h>
/*
Q-8.3. WAP to reverse a string and check that the string is palindrome or not.
*/
int main()
{
	char a[100],b[100];
	int i,j,flag=0;
	printf("\nEnter the String : ");
	scanf("%c",&a);
	j=0;
	for(i=strlen(a)-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	b[j]='\0';
	for(i=0;i<=strlen(a);i++)
	{
		if(a[i]!=b[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\nIts is a Palindrome String.");
	}
	else
	{
		printf("\nIts is not a Palindrome String.");
	}
	return 0;
}
