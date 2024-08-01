/*5.Find area of cube formula: a = 6a2*/

#include<stdio.h>
int main()
{
	//static   //
	float a;
	printf("Enter the value of a: ");
	scanf("%f",&a);
	
	a = 6*a*2;

	printf("\nArea of the cube :%.2f", a);
	return 0;
	
}
