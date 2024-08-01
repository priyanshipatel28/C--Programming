/*16. Calculate the sum of natural numbers using the While loop.*/
//Natural numbers are positive integers from 1 to infinity.
#include<stdio.h>
int main()
{
	int n1,n2,i,sum=0;
	printf("Enter your number:");
	scanf("%d",&n1);
	printf("Enter your number:");
	scanf("%d",&n2);
	if(n1>0 && n2>0)
	{
	
	for(i=n1;i<=n2;i++)
	{
		printf("\n%d",i);
		sum += i;
	}
	printf("\nThe sum of %d and %d between values is %d",n1,n2,sum);
	}
	
	else
	{
		printf("IT is a negative numbers.");
	}
	return 0;
}
