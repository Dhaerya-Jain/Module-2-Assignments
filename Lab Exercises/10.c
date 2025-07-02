#include<stdio.h>
/*
Q.10.Write a C program to demonstrate pointer usage. Use a pointer to modify the
value of a variable and print the result.
*/
int main()
{
	int num=10;
	int *ptr;
	
	ptr = &num;
	
	printf("\nThe original value of a is %d.",num);
	
	*ptr = 20;
	
	printf("\nModified value of a is now %d.",num);
	return 0;
}
