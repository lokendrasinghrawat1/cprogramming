#include <stdio.h>

int main(){
	
	int year;
	
	printf("Enter the year number : \n");
	scanf("%d",&year);
	
	(year%4==0 && year%100!=0) ? printf("LEAP YEAR") :
        (year%400 ==0 ) ? printf("LEAP YEAR") : printf("COMMON YEAR");
			
	return 0;
	
}
