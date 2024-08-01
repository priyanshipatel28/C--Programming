/* 13. find character value from ascii.*/
//here user is giving ascii character and we want number of taht character.

#include<stdio.h>
int main()
{
	char c;
	printf("Enter your character: ");
	scanf("%c",&c);
	
	// here in printf we are number for the character, taht's why "%d"
	printf("The ascii number for the character is: %d ",c );
	return 0;
	
}
