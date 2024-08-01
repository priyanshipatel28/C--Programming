/*11. Accept 5 names from user at run time.*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char name[50];
	for(i=0;i<5;i++)
	{
	printf("\nEnter your name:");
	gets(name);
	printf("\nThe name is %s",name);
	}
	
}
