/*16. convert country name in abbreviate form: */
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0;
	char a[100],c[100];
	printf("Enter country name : ");
	gets(c);
	
	
	for(i=0; c[i] != '\0'; i++ )
	{
		if((i==0 || c[i-1] == ' ') &&c[i] !=' ')
		{
			a[j]= c[i];
			j++;
		}
	}
	
	printf("The %s country abbreviation form is %s",c,strupr(a));
	return 0;
}
/*// for string you have to use %s.
	char countryname;
	printf("Enter your countryname :");
	scanf("\n %c",&countryname);
	// it is different from 15, to pass array in this code is not necesarry. with the help of character we can do it.
	printf("The abbreviate form of country is: %c",countryname);*/
