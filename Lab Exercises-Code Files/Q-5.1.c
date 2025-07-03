#include<stdio.h>
/*
Q-5.1. Write a C program to check if a number is even or odd using an if-else statement.
Extend the program using a switch statement to display the month name based on the user's
input (1 for January, 2 for February, etc.).
*/				     	
int main()
{
	int a,m;
	printf("\nEnter the value of integer a = ");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("\nThe number entered is an even number");
	}
	else if(a==0)
	{
		printf("\nThe number entered is an even number");
	}
	else
	{
		printf("\nThe number entered is an odd number");
	}
	
	printf("\n");
	
	printf("\nEnter any number between 0-12 to get the month = ");
	scanf("%d",&m);
	
	switch(m)
	{
		case 1:
			printf("The month is January");
		break;
		case 2:
			printf("The month is February");
		break;
		case 3:
			printf("The month is March");
		break;
		case 4:
			printf("The month is April");
		break;
		case 5:
			printf("The month is May");
		break;
		case 6:
			printf("The month is June");
		break;
		case 7:
			printf("The month is July");
		break;
		case 8:
			printf("The month is August");
		break;
		case 9:
			printf("The month is September");
		break;
		case 10:
			printf("The month is October");
		break;
		case 11:
			printf("The month is November");
		break;
		case 12:
			printf("The month is December");
		break;
		default:
			printf("\nInvalid choice.");
	}
	return 0;
}

