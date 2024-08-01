/* 12. Accept number of students from user. I need to give 5 apples to each student. How many apples are required?. */

#include<stdio.h>
int main()
{
	int students,apples;
	printf("Enter no. of students :");
	scanf("%d",&students);
	
	apples=5*students;
	
	printf("Total no. of apples required %d", apples);
	return 0;
	
}
