/* 4. Find area of square formula: a=a2.*/
#include<stdio.h>
int main()
{
	//static  //
	//in float it will accept both the value int and  float.
	float a;
	printf("Enter the value of a: ");
	scanf("%f",&a);
	
	a = a*2;

	printf("\nArea of the square :%.2f", a);
	return 0;
	
}
