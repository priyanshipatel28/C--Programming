/*29. Convert minutes into seconds and hours. */

#include<stdio.h>
int main()
{
	int m,s,h,r;
	printf("Enter you minutes: ");
	scanf("%d",&m);
	
	s = (m*60) / 1;
	printf("The seconds for the given minutes are: %d");
	h = (1*m) / 60;
	r = (1*m) % 60;
	printf("\nThe hours for the given minutes are : %d minutes %d hours" ,r,h);
	return 0;
}
