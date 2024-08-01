/* 3. WAP to find Area And Circumference of Circle.*/
//diameter of a cicle, D=2*r.
//Circumference of a circle, C=2*pie*r.
//Area of a circle, A=pie*r2.

#include<stdio.h>
int main()
{
	//static  //
	//radius can be on integer also. int r;  (%d) in scanf.
	float C, A, r, pi=3.14;
	printf("Enter the value of r: ");
	scanf("%f",&r);
	
	A = pi*r*r;
	C = 2*pi*r;
	
	printf("\nArea of the cirle :%.2f", A);
	printf("\nCircumference of a circle is :%.2f", C );
	return 0;
	
}
