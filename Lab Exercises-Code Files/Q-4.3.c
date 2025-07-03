#include<stdio.h>
/*
Q-4.3. Write a program to find the area of a square, cube and a triangle.
*/				     	
int main()
{
	int A,a,b,h,l;
	float tri,c=0.5;
	
	printf("\nEnter the value of side of square = ");
	scanf("%d",&a);
	printf("\nThe area of the square is = %d",a*a);
	
	printf("\n");
	
	printf("\nEnter the value of side of cube = ");
	scanf("%d",&l);
	A = l*l;
	printf("\nThe area of the cube is = %d",A*6);
	
	printf("\n");
	
	printf("\nEnter the lenght of base of triange = ");
	scanf("%d",&b);
	printf("\nEnter the lenght of height of triange = ");
	scanf("%d",&h);
	tri = c*b*h;
	printf("\nThe area of triangle is = %.2f",tri);
	
	return 0;
}

