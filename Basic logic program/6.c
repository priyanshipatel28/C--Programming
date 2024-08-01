/* 6. Find area of triangle formula:A=(b*h)/2.*/

#include<stdio.h>
int main()
{
	//static   //
	float a,b,h;
	printf("Enter the value of b:");
	scanf("%f",&b);
	printf("Enter the value of h: ");
	scanf("%f",&h);
	
	//A=1/2*b*h; direct formmula won't be accepted.
	a = (b*h)/2;

	printf("\nArea of the triangle :%.2f", a);
	return 0;
	
	
}
