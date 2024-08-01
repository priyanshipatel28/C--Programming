/* 1. Display this information using printf
a. your name
b. your birthdate
c. your age
d. your address
*/

#include<stdio.h>
int main()
{
	printf("\nMy name is priyanshi.");
	printf("\nMy birthdate is 28-12-2002.");
	printf("\nMy age is 21.");
	printf("\nAddress : sharaj prime, new science cty road, sola,ahmedabad.");
	
	printf("\n second option");
	
	char name[11]="Priyanshi";
	char Birthdate[15]="28-dec-2002";
	int age=21;
	char Address[65]= "Shree swam nr. Gokul hotel,New science city road, sola, Ahmedabad";
	
	printf("\nMy name is: %s", name);
	printf("\nMy Birthdate is : %s",Birthdate);
	printf("\nMy age is: %d",age);
	printf("\nAddress :%s", Address);
	
	
	
	return 0;
}
