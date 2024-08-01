/*4. WAP to print table up to given numbers*/
#include<stdio.h>
int main()
{
	int num,i,num1;
	printf("Enter your any  number:");
	scanf("%d",&num);
	
	printf("\nThe table of %d",num);
	for(i=1;i<=10;i++)
	{
		//num * i = num1;//this is not possible because the value of right operation 
							//is assign to left operation
							//the i=1,num=5   : 5*1=5(num1)
		num1 = i*num;
		printf("\n%d * %d =%d",num,i,num1);
	}
	return 0;	
}
