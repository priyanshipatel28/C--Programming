/*20. Accept monthly salary from the user and deduct 10%(0.1) insurance premium, 
10%(0.1) loan installment. find out of remaining salary.*/

#include<stdio.h>
int main()
{
	int S, Remainingsalary ;
	//we can't do directly 10% as a coalculation in remainingsalary.
	//in c langauge we can't enter direct 10% in calculation because in c language % is for module.
	//that's why, we have to use float and convert 10% ----> decimal value 0.1
	float insurance=0.1, loaninstallment=0.1;
	
	//printf("insurance premium = 10%");
	//printf("loan installment = 10%");
	printf("Enter your salary: ");
	scanf("%d",&S);
	
	//Remainingsalary = (S- 10% )- 10%;
	Remainingsalary = S-insurance-loaninstallment;
	
	printf("The Remaining salary : %d", Remainingsalary);
	return 0; 
}
