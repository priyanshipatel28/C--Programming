/*30. WAP to convert years into days and days into years.*/

#include<stdio.h>
int main()
{
	int years, days;
	
	printf("Enter your years: ");
	scanf("%d",&years);
	
	days = (years*365)/1;
	printf("\nThe days for the giving year is: %d",days);
	
	printf("\nEnter your days: ");
	scanf("%d",&days);
	
	years = days/365;
	printf("\nThe year for the giving days is: %d",years);
	
	return 0;
}
