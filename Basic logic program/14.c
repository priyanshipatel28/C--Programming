/*14. Find ascii value of given number.*/
//in 13. it was asking character for ascii.

#include<stdio.h>
int main()
{
	int number;
	
	printf(" Enter your number to get its ascii value:");
	scanf("%d",&number);
	
	//here we want to print ascii value for a given number, that's why "%c".
	printf("Here is your ascii value for the given number :%c",number);
	return 0;
	
}
