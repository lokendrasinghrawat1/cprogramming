// C program to find square root of a given number

#include <stdio.h>
#include <math.h>

int main ()
{
	double a,b;
	
	printf("Enter the number:\n");
	scanf("%lf",&a);
	
	b= sqrt(a);
	
	printf("\nSquareroot of %.2lf = %.2lf",a,b);
	
	return 0;


}
