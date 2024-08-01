/*9. Write a program make a summation of given number.(e.g:1523, ans: 11*/
#include<stdio.h>
int main()
{
	int num,i,sum=0,num1;
	printf("Enter any number:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		printf("The number are:");
		scanf("%d",&num1);
		
		sum += num1;
	}
	printf("Then sum of numbers : %d",sum);
	return 0;
}
