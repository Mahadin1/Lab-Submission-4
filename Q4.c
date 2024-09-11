#include<stdio.h>

int main(){
    int income, tax, afterTax;
	printf("Please Enter your income to know TAX details : ");
	scanf("%d", &income);
    if(income <= 250000){
		tax = 0;
		afterTax = income;
	}else if(income >= 250001 && income <= 500000){
		tax = (income/100)*5;
		afterTax = income - tax;
	} else if(income >= 500001 && income <= 1000000){
		tax = (income/100)*20;
		afterTax = income - tax;
	}else if(income > 1000000){
		tax = (income/100)*30;
		afterTax = income - tax;
}

    if(income < 0){
    	printf("Invalid data, please enter the positive value.");
	}else{
	printf("Total income : %d \n", income);
	printf("Tax amount is : %d \n", tax);
	printf("Income after tax deduction :  %d \n", afterTax);
	}
	
	
	return 0;
}
