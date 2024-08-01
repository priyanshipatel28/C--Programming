/*24. Accept 5 employees name and salary and count average and total salary. */
//Total Salary = Salary_Person1 + Salary_Person2 + ... + Salary_Person5
//Average Salary = Total Salary / Number of People

#include<stdio.h>
int main()
{
	int em1,em2,em3,em4,em5, Tsalary;
	char n1[10],n2[10],n3[10],n4[10],n5[10];
	float Average;
	
	printf("Enter name of em1 is n1 : ");
	scanf("%s",&n1);
	printf("Enter salary of em1 : ");
	scanf("%d",&em1);
	
	printf("Enter name of em1 is n2 : ");
	scanf("%s",&n2);
	printf("Enter salary of em2 : ");
	scanf("%d",&em2);
	
	printf("Enter name of em1  is n3: ");
	scanf("%s",&n3);
	printf("Enter salary of em3 : ");
	scanf("%d",&em3);
	
	printf("Enter name of em1  is n4: ");
	scanf("%s",&n4);
	printf("Enter salary of em4 : ");
	scanf("%d",&em4);
	
	printf("Enter name of em1  is n5 : ");
	scanf("%s",&n5);
	printf("Enter salary of em5 : ");
	scanf("%d",&em5);
	
	Tsalary=em1+em2+em3+em4+em5;
	printf("\nTotal Salary is : %d",Tsalary);
	
	Average= (Tsalary / 5 );
	printf("\nYour average value is: %.2f ", Average);
	return 0;
}
