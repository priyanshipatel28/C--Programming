/* 19. calculate compound interest. 
A = P * pow((1 + r / 100), t)
Where:
A is the final amount (including principal and interest)
P is the initial principal amount
r is the annual interest rate (as a decimal, not a percentage)
t is the number of years
pow is a library function in C from the math.h library that calculates exponentiation.*/

#include<stdio.h>
#include<math.h>
int main()
{
 	long int P,T;
	float r,A;
	
	printf("Enter your  principal amount :");
	scanf("%ld",&P);
	
	printf("Enter number of years: ");
	scanf("%d",&T);
	
	printf("Enter annual rate: ");
	scanf("%f",&r);
	
	
	A = P * pow((1 + r / 100), T);
	
	printf("\nThe compound interest is: %.2f",A);
	return 0;
		
}
