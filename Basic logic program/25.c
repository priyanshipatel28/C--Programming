/*25. Accept 5 expense from user and find average of expense.*/
#include<stdio.h>
int main()
{
	int p1,p2,p3,p4,p5, Texpense;
	float Average;
	
	printf("Enter salary of p1 : ");
	scanf("%d",&p1);
	
	printf("Enter salary of p2 : ");
	scanf("%d",&p2);
	
	printf("Enter salary of p3 : ");
	scanf("%d",&p3);
	
	printf("Enter salary of p4 : ");
	scanf("%d",&p4);
	
	printf("Enter salary of p5 : ");
	scanf("%d",&p5);
	
	Texpense=p1+p2+p3+p4+p5;
	printf("\nTotal Salary is : %d",Texpense);
	
	Average= (Texpense / 5 );
	printf("\nYour average value is: %.2f ", Average);
	return 0;
}
