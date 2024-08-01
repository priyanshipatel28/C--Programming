/* 2. Write a program to make simple calculator( to make adddition, subtraction,Multiplication, division and modulo)*/

#include<stdio.h>
int main()
{
	
	int num1, num2, sum, sub, mul, mol;
	float div;
	printf("\n Print num1 :");
	scanf("\n%d",&num1);
	printf("\n Print num2 : ");
	scanf("\n%d",&num2);

	sum = num1+num2;
	printf("\n sum:%d", sum);
	
	sub = num1-num2;
	printf("\n sub:%d", sub);
	
	mul = num1*num2;
	printf("\n mul:%d", mul);
	
	div = num1/num2;
	printf("\n div:%.2f", div);
	 
	mol = num1%num2;
	printf("\n mol:%d", mol);
		
	return 0;	
}


//also can be done as 
//direct calculation in printf.
/*printf(" \n%d  + %d  = %d ", num1,num2,num1+num2);
printf(" \n%d  - %d  = %d ", num1,num2,num1-num2);
printf(" \n%d  * %d  = %d ", num1,num2,num1*num2);
printf(" \n%d  / %d  = %d ", num1,num2,num1/num2);
printf(" \n%d  %% %d  = %d ", num1,num2,num1%num2);*/

