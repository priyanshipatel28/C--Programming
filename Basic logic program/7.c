/*7. Find area of Rectangle formula: A=wl.*/

#include<stdio.h>
int main()
{
	int A,w,l;
	
	printf(" Enter the value for width: ");
	scanf("%d",&w);
	printf(" Enter the value for length: ");
	scanf("%d",&l);
	
	A=(w*l);
	
	printf("Area of rectangle is: %d", A);
	return 0;
	
	
}
