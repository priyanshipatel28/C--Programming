/*18. calculate person's annual salary*/
//Annual Salary = Monthly Salary x 12
#include<stdio.h>
int main()
{
	 long int annualsalary, monthlysalary;
	
    printf("Enter your monthlysalary: ");
    scanf("%ld", &monthlysalary);

    annualsalary= (monthlysalary*12) ;
    
    printf("\nThe person's' annual salary is: %ld\n", annualsalary);
    return 0;
}

