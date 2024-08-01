/*31. Convert kilometers into meters.*/
#include<stdio.h>
int main()
{
	int K,M;
	printf("Enter your kilometers: ");
	scanf("%d",&K);
	
	M = (K*1000)/1 ;
	printf("The meters for the kilometer is: %d", M);
	return 0;	
}
