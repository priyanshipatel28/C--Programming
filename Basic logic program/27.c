/*27. convert days into months.*/

#include<stdio.h>
int main()
{
	//R= remaining days
	int days, months , R;
	
	printf("Enter your days: ");
	scanf("%d",&days);
	
	months = days/30;
	R = days % 30;
	
	printf("The months for days given are: %d",months);
	printf("\nFor this days given the remaining days are : %d months & %d days ", months, R);
	return 0;
}
