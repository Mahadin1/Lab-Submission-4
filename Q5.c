#include<stdio.h>

int main(){
	int year;
	printf("Enter a year to know if it is leap year : ");
	scanf("%d", &year);
	
	
	if((year%4)==0){
		printf("%d is a leap year.",year);
		
	}else{
		printf("%d is not a leap year.",year);
	}
	
	return 0;
}

//diving by 400 does not work, if you divide 2004 by the remainder will not be 0
// you can check
