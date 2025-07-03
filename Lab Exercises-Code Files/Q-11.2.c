#include<stdio.h>
/*
Q-11.2. Find length of string which is entered by user without
using inbuilt function.
*/
int main()
{
	char str[100];
	int len=0;
	
	printf("\nEnter any String : ");
	fgets(str,sizeof(str),stdin);
	
	while(str[len]!=0 && str[len]!='\n')
	{
		len++;
	}
	
	printf("The length of the entered string is: %d\n", len);
	return 0;
}
