//12. Program of Armstrong Number in C using For Loop & While Loop.
//e.g.:- nnum =153,----> 1 ^3 + 5^3 + 3^3   ----->153.
#include<stdio.h>
#include<math.h>
int main()
{
	int num,power=0,count=0,rem;
	
	
	printf("Enter the num :");
	scanf("%d",&num);//153
	int	copy = num;//we are repeating the value of num because after completon of loop , each value is becoming zero.
	// we need to compare the value of num with itself to prove it right.   153------>153.
	int copy1 = num;
	
	while(num!=0)//num!= 0 means whatever we take value as num but it will never be zero.
	{
		num = num/10;//153/10 = 15.3 here it will take only int value(15) , gain num(15!=0) contition true
		//num = 15/10 = 1.5---->nagain count---> num = 1/10=0.1. num is zero(0!=0) condition false.
		count ++;//it will count the number of time the loop will run.
	}
	
	while(copy!=0)//(15.3!=0), condition true.
	{
		rem = copy%10;//153%10= 3(remainder), 15%10=5---->1%10---->1
		//
		power =  power + pow(rem,count);//power= 0+pow(3^3)---->power=9----> power = 9+5^3--->152--->power153+1^3=154
		copy = copy/10;//153/10=15.3
		
	}
	if(power == copy1)
	{
		printf("It is a armstrong number %d .",copy1);
	}
	else
	{
		printf("It is not a armstrong number.",copy1);
	}
	
	
	return 0;
}
