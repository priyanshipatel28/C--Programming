/*17. Calculate person's insurance premium based on salary.*/
/*Formula (Simplification):

Premium = (Salary * Risk Factor) / Coverage Multiplier

Where:
Salary: (int)This would be the person's annual income.
Risk Factor:(dec) This is a hypothetical number assigned by the insurance
company based on the perceived risk associated with insuring someone at a particular income level. 
In a real scenario, this would consider various factors beyond income.
Coverage Multiplier:(int) This represents the factor by which the premium amount
is divided to get the final premium. 
It accounts for the insurance company's operating costs and profit margin.*/
#include <stdio.h>

int main() 
{
    float R;
    long int S;
    float C,Premium;
    printf("Enter your S: ");
    scanf("%ld",&S);

    printf("Enter your C: ");
    scanf("%f",&C);
    
	printf("Enter your R :");
	scanf("\n%f",&R);

    Premium =(S * R) / C;

    printf("The insurance premium based on salary is: %.2f \n", Premium);

    return 0;
}

