#include<stdio.h>
/*
Q-9.1. Write a C program that stores 5 integers in a one-dimensional array and prints
them. Extend this to handle a two-dimensional array (3x3 matrix) and
calculate the sum of all elements.
*/
int main() 
{
    int i,j,numbers[5];
    printf("Enter 5 integers:\n");
    for (i=0;i<5;i++) 
	{
        printf("Enter integer %d: ",i+1);
        scanf("%d",&numbers[i]);
    }

    printf("You entered:\n");
    for (i=0;i<5;i++) 
	{
        printf("%d\n", numbers[i]);
    }

    int matrix[3][3];
    int sum = 0;

    printf("Enter 9 integers for a 3x3 matrix:\n");
    for (i=0;i<3;i++) 
	{
        for (j=0;j<3;j++) 
		{
            printf("Enter element [%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }

    printf("The 3x3 matrix is:\n");
    for (i=0;i<3;i++) 
	{
        for (j=0;j<3;j++) 
		{
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    printf("The sum of all elements in the matrix is: %d\n",sum);
    return 0;
}

