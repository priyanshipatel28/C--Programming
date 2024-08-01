/*32. Accept 2 numbers and find out its sum check it size.*/

#include<stdio.h>
int main()
{
	int n1,n2,sum;
	printf("Enter integer n1: ");
	scanf("%d",&n1);

	printf("Enter integer n2: ");
	scanf("%d",&n2);
	
	sum = n1 + n2;//for integer the size is 2, that's why sum= 2 size of n1 + 2 size of n2.
	printf("The sum of the integer is :%d", sum);
	printf("\nThe size of the integer is :%d", sizeof(sum));
	return 0;
}

