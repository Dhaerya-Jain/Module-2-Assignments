#include<stdio.h>
/*
Q-11.3. Join 2 strings using of user defined function without using inbuilt
 function.
*/

void joinStr(char *str1, char *str2, char *result)
{
	int i=0;
	while(str1[i]!='\0')
	{
		result[i] = str1[i];
		i++;
	}
	int j=0;
	while(str2[j]!='\0')
	{
		result[i] = str2[j];
		i++;
		j++;
	}
	result[i] = '\0';
}

int main()
{
	char str1[100], str2[100], result[200];
	int k;
	
	printf("\nEnter the first String : ");
	fgets(str1, sizeof(str1), stdin);
	printf("\nEnter the second String : ");
	fgets(str2, sizeof(str2), stdin);
	
	for(k=0; k<100; k++)
	{
		if (str1[k]=='\n')
		{
			 str1[k] = '\0';
            break;
		}
	}
	for(k=0; k<100; k++)
	{
		if (str2[k]=='\n')
		{
			 str2[k] = '\0';
            break;
		}
	}
	
	joinStr(str1, str2, result);
	printf("\nJoined Strings are : %s",result);
	return 0;
}
