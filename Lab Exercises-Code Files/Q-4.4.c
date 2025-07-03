#include<stdio.h>	
/*
Q-4.4. Accept number of students from user. 
I need to give 5 apples to each student. How many apples are required?
*/			     	
int main()
{
	int s;
	printf("\nEnter the Number of students = ");
	scanf("%d",&s);
	
	printf("\nThe total number of apples needed are = %d",s*5);
	
	return 0;
}

