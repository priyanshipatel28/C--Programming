/*26. Convert temperature fahrenheit to celsius.*/

#include<stdio.h>
int main()
{
	float f,c ;
	printf("Enter fahrenheit value: ");
	scanf("%f",&f);
	
	c = (f/5)+32;
	printf("The celsius temperature is: %.2f",c);
	return 0;
}
