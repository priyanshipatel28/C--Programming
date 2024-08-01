/*22. Calculate compound interest(compound Interest formula);
a. Formula to calculate compound interest annually is given by:
   Amount= P(1+R/100)t 
b. Compound Interest = Amount - P .*/

#include<stdio.h>
int main()
{
	int t;
	long int P;
	float CA,R,Amount;
	
	printf("Enter your principle amount: ");
	scanf("%Id",&P);
	
	printf("Enter your rate of interest: ");
	scanf("%f",&R);
	
	printf("Enter your time: ");
	scanf("%d",&t);
	
	Amount = (P*(1+R)*t) /100;
	printf("\nYour Annually compound is : %.2f ",Amount);
	CA = P - Amount;
	printf("\nYour Compound Interest is : %.2f", CA);
	return 0;	
}
