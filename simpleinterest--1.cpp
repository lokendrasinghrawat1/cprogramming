// calculating simple interest 

#include <stdio.h>
#include <math.h>

int main(){
	float p,r,t;
	
	printf("Enter the principal:\n");
	scanf("%f",&p);
	
	printf("Enter the rate:\n");
	scanf("%f",&r);
	
	printf("Enter the time:\n");
	scanf("%f",&t);
	
	printf("\nSimple interest:\n%f",(p*r*t)/100);
	
	return 0;	
}
