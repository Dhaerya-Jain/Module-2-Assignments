#include<stdio.h>	
/*
Q-4.2. Write a program to Find Area and Circumference of Circle.
*/			     	
int main()
{
	int r,b;
	printf("\nEnter the value of Radius of the circle = ");
	scanf("%d",&r);
	float area,circ,a = 3.14;
	b=r*r;
	area = a*b;
	circ = 2*a*r;
	
	printf("\nThe area of the circle with radius %d = %.2f",r,area);
	printf("\nThe circumference of the circle = %.2f",circ);
	return 0;
}

