/*8. Write a program to find out the max from given number.(e.g: no:-1562, max number is 6)*/
#include<stdio.h>
int main()
{
	int num, i,max = 0,num1;
	printf("Enter your number: ");
	scanf("%d",&num);//num ---> how many timw the loop will run.
	
	for(i=1;i<=num;i++)
	{
		printf("Enter number:");
		scanf("%d",&num1);//the number user will print
		if(num1>max)//if num1 = 12, then at first max=0.
		//afte that max= num1---> max=12, again loop 
		//now the again the value of user is 56,the 56>12, do it will do assignment operation again.
		//max(56)=56, like this it will print max number.
		{
			max = num1;
		}
	}
	printf("Enter the max number is %d",max);
	
	
return 0;	
}

