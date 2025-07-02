#include<stdio.h>
#include<string.h>
/*
Q-11.1. Write a C program that takes two strings from the user and concatenates them
using strcat(). Display the concatenated string and its length using strlen().
*/
int main()
{
	char str1[100], str2[100], result[200];
	
	printf("\nEnter the first String : ");
	fgets(str1, sizeof(str1), stdin);
	printf("\nEnter the second String : ");
	fgets(str2, sizeof(str2), stdin);
	
	str1[strcspn(str1, "\n")] = '\0';
	str2[strcspn(str2, "\n")] = '\0';
	
	strcpy(result, str1);
	strcat(result, str2);
	
	printf("\nThe concatenated string is : %s", result);
	printf("\nThe length of concatenated string is = %d", strlen(result));
	return 0;
}
