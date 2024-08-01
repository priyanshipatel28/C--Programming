/* write a C program to accept two integers and check wheathe they are eaual or not.*/
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter value for num1:");
	scanf("\n%d",&num1);
	
	printf("Enter value for num2: ");
	scanf("\n%d",&num2);
	
	if(num1>num2){
		printf("num1 is bigger than num2.");
	}
	else if (num1==num2)
	{
		printf("num1 is equal to num2.");
	}
	else{
		printf("num2 is bigger than num1.");
	}
	return 0;
}
