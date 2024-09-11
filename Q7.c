#include<stdio.h>

int main(){
	int id,srcharge_amount;
	float unit,bill,sr_charge,netAmount;
	char name[20];
	printf("Please enter your ID : ");
	scanf("%d",&id);
	printf("Please enter Name : ");
	scanf("%s",&name);
	printf("Please enter your Units : ");
	scanf("%f",&unit);
	
	if (unit <= 199){
		sr_charge=16.20;
		bill = unit *sr_charge;
	}else if (unit >= 200 && unit < 300){
		sr_charge=20.10;
		bill = unit *sr_charge;
	}else if (unit >= 300 && unit < 500){
		sr_charge=27.10;
		bill = unit *sr_charge;
	}else if (unit >= 500){
		sr_charge=35.90;
		bill = unit *sr_charge;
	}
	
	if (bill > 18000){
		srcharge_amount = bill/100 * 15;
		netAmount = bill + srcharge_amount;
	}
	
	if(unit < 0){
		printf("invalid units, Enter positive value");
	}else {
		printf("Customer Information \n");
		printf("Customer ID : %d \n",id);
		printf("Customer Name : %s \n",name);
		printf("Unit Consumed : %.2f \n",unit);
		printf("Amount Charges @Rs. %.2f per unit: %.2f \n",sr_charge);
		printf("Surchage Amount : %d \n",srcharge_amount);
		printf("Net Amount Paid by the Customer: %.2f \n",netAmount);
	}
	return 0;
}
