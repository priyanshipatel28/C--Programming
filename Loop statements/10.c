/*10. Write a program you have to make a summation of first and last digit.(e.g: 1234 ans: 5)*/
#include<stdio.h>
int main()
{
	int num,i,l,rem,f,sum=0;
	printf("Enter the num :");
	scanf("%d",&num);
	
	printf("%d",num);
	//last number
		rem = num%10;
		l = rem;
		printf("\nThe last number of digit is %d ",l);
	//first number
	while(num>10)
	{
	num = num/10;
	f = num;
	}
	printf("\nThe first number of digit is %d",f);
	/*To calculate the first digit, we use a while loop that continues to divide f 
	by 10 until f is less than 10. At this point, f will hold the first digit of the original number.

Finally, we calculate and print the sum of the first and last digits.*/
	
	sum = l+f;
	printf("\nThe summation of last number and first number id %d.",sum);
	
	return 0;
}
