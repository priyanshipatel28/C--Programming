/*14. Accept 5 numbers from user and find those numbers factorials.*/
#include<stdio.h>
int main()
{
	int num, i,fact=1,j;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter the num :");
		scanf("\n%d",&num);//5
		printf("\n");
		printf("\n%d",num);
	
		fact=1;
		for(j=1;j<=num;j++)//here I have to write (j) loop because if I take (i) loop than
						//at the end of code the value of (i) is increase till (6).
						// if (i=1;i<=num;i++)
						//then at first the value of i=1 then num is 5 so, it will repeat the loop 5 times 
						//but after that due to i++, the value of (i) will be increase to 6. 
						//And when it again to first loop(i=1;i<=5;i++),
						// here it will i(6)<=(5), condition false.
	{
			fact = fact * j;
	}
	printf("Enter the factorial of %d is %d",num,fact);
}
	
	return 0;
}
