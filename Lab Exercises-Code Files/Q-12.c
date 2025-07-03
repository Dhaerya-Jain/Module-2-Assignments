#include<stdio.h>
/*
Q-12. Write a C program that defines a structure to store a student's 
details (name, roll number, and marks). Use an array of structures to store 
details of 3 students and print them.
*/
struct Student
{
	char fname[100];  //First name
	char lname[100];  //Last name
	int roll,p,c,m;
};

int main()
{
	int i;
	struct Student s[50];
	printf("\nEnter the details of 3 students :-");
	
	for(i=0;i<3;i++)
	{
		printf("\nEnter Details of Student %d\n",i+1);
		printf("\nEnter Student Name : ");
		scanf("%s %s",&s[i].fname,&s[i].lname);
		printf("\nEnter Student Roll no. : ");
		scanf("%d",&s[i].roll);
		printf("\nEnter your marks in Physics = ");
		scanf("%d",&s[i].p);
		printf("\nEnter your marks in Chemistry = ");
		scanf("%d",&s[i].c);
		printf("\nEnter your marks in Maths = ");
		scanf("%d",&s[i].m);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		printf("Student %d details:-\n",i+1);
		printf("Student Name : %s %s\n",s[i].fname,s[i].lname);
		printf("Student Roll No. : %f\n",s[i].roll);
		printf("Student Physics Marks : %d\n",s[i].p);
		printf("Student Chemistry Marks : %d\n",s[i].c);
		printf("Student Maths Marks : %d\n",s[i].m);
		printf("---------------------------------------------------\n");
	}
	
	return 0;
}
