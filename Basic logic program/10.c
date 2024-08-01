/*10. The area of a rectangular prism formula : A=2(wl+hl+hw).*/

#include<stdio.h>
int main()
{
	int A,w,l,h;
	
	printf(" Enter the value for width: ");
	scanf("%d",&w);
	printf(" Enter the value for length: ");
	scanf("%d",&l);
	printf(" Enter the value for height: ");
	scanf("%d",&h);
	
	A = 2*(w*l+h*l+h*w); 
	
	printf("\nThe area of a rectangle prism formula is: %d", A);
	return 0;
}
