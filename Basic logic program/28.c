/*28. convert years into days and months.*/
#include<stdio.h>
int main()
{
	int years, days, months;
	
	printf("Enter your years: ");
	scanf("%d",&years);
	
	months = (years*12)/1;
	printf("\nthe months for the giving year is: %d",months);

	days = (months*30)/1;
	printf("\nthe days for the giving year is: %d",days);
	return 0;
}
