/*23. WAP to calculate swap 2 numbers with using of multiplication and division.*/

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value for a : ");
	scanf("%d",&a);
	
	printf("Enter value for b : ");
	scanf("%d",&b);
	
	printf("\nEnter value of a before swapping: %d",a);
	printf("\nEnter value of b before swapping: %d",b);
	
	b=b*a;
	a=b/a;
	b=b/a;
	
	printf("\nEnter value of a after swapping: %d",a);
	printf("\nEnter value of b after swapping: %d",b);
	return 0;		
}
