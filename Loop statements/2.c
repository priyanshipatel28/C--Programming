/*2. WAP to accept 5 numbers from user and display all numbers.*/

#include<stdio.h>
int main()
{
	int i,num;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	for(i=0;i<=num;i++)
	{
		printf("\nEnter your number: ");
		scanf("%d",&i);
		printf("\nEnter the number are : %d",i);
	}
	return 0;
 }
/*
#include<stdio.h>
int main()
{
	int num[5],i;
	
	for(i=0;i<5;i++)
	{
		printf("Enter any number %d: ",i);
		scanf("\n%d",&num[i]);		
	}
	for(i=0;i<5;i++)
	{
	printf("\nthe numbers are : %d",num[i]);
	}
	return 0;
}
*/

