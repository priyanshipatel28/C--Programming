/*15. convert school name in abbreviate form.*/ 

#include<stdio.h>
#include<string.h>
int main()
{
	char a[500],ab[500];
	int i,j=0;
	
	printf("Enter the name of school:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if( (i==0 || a[i-1] == ' ') && a[i]!=' ')
		{
			ab[j]=a[i];
			j++;
		}
	}
	printf("Enter the abbreviate form of %s is %s",a,strupr(ab));
	return 0;
	
}


/*#include<stdio.h>
int main()
{
	//char schoolname;
	char schoolname;
	printf("Enter your school name :");
	scanf("%c",&schoolname);
	
	
	// if i write %s in printf then it will pass my whole string,(the word user has inserted.
	//but here I only want abbreviate form (only first letter or shortform.that's why %c in printf.
	printf("your abbreviate form: %c",schoolname);
	return 0;
	
}*/
