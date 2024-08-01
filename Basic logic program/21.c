/*21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable.*/
//with using 3rd variable.

#include<stdio.h>
int main()
{
	int a,b,c,e,d;
	printf("Enter value for a : ");
	scanf("%d",&a);
	
	printf("Enter value for b : ");
	scanf("%d",&b);
	
	printf("\nEnter value of a before swapping: %d",a);
	printf("\nEnter value of b before swapping: %d",b);
	
	c=b;  //c is empty, b is swapped with c.
	b=a;  //b is empty, a is swapped with b.
	a=c;  //c is having b value, a is swapped with c.
	
	printf("\nEnter value of a after swapping: %d",a);
	printf("\nEnter value of b after swapping: %d",b);
	

//without using third variable(1 method).
	printf("\n\n");
	
	printf("\nEnter value for e : ");
	scanf("%d",&e);
	
	printf("\nEnter value for d : ");
	scanf("%d",&d);
	
	printf("\nEnter value of e before swapping: %d",e);
	printf("\nEnter value of d before swapping: %d",d);
	
	d=d+e;
	e=d-e;
	d=d-e;
	
	printf("\nEnter value of e after swapping: %d",e);
	printf("\nEnter value of d after swapping: %d",d);
	return 0;		
}


//without using third variable(2 method).
/*
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value for a : ");
	scanf("%d",&a);
	
	printf("Enter value for b : ");
	scanf("%d",&b);
	
	printf("\nEnter value of a before swapping: %d",a);
	printf("\nEnter value of b before swapping: %d",b);
	
	b=b*a;
	a=b/a;
	b=b/a;
	
	printf("\nEnter value of a after swapping: %d",a);
	printf("\nEnter value of b after swapping: %d",b);
	return 0;		
}
*/
