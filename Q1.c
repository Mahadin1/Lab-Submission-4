#include<stdio.h>
 int main(){
 	int num,sol;
 	printf("Enter a number to find if it is even or odd :  ");
 	scanf("%d", &num);
 	
 	
 	
 	sol = num % 2;
 	if (num < 0) {
		printf("Your number is negative, Enter a positive number");
	}else if (sol == 0 ){
 		printf("your number is EVEN");
 	}else {
		printf("Your number is ODD");
	}
	return 0;
	}  
