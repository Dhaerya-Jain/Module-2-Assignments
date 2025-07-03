#include<stdio.h>
/*
Q-13. Write a C program to create a file, write a string into it, close the file,
then open the file again to read and display its contents.
*/
int main()
{
	char str[100];
	
//Writing String into the file::
	FILE *fp;
	fp=fopen("demo.txt","w");
	fprintf(fp,"This is a Demo File for Assignment !!");
	fclose(fp);
	
//Reading the file and displaying whats written in it::
	fp=fopen("demo.txt","r");
	if(fp==NULL)
	{
		printf("\nNo file found..!");
		return 1;
	}
	else
	{
		while(fgets(str,sizeof(str),fp))
		{
			printf("%s",str);
		}
	}
	fclose(fp);
	return 0;
}
