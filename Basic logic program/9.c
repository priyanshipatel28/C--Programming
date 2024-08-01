/* 9. Find circumference of triangle formula: Triangle=a+b+c.*/
#include<stdio.h>
int main()
{
	int triangle,a,b,c;
	
	printf(" Enter the value for a: ");
	scanf("%d",&a);
	printf(" Enter the value for b: ");
	scanf("%d",&b);
	printf(" Enter the value for c: ");
	scanf("%d",&c);
	
	triangle = a + b + c; 
	
	printf("\nCircumference of triangle is: %d", triangle);
	return 0;
	
	
}
