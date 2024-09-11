#include<stdio.h>

int main(){
	int marks;
	printf("Enter your mark to know your Grade : ");
	scanf("%d",&marks);
	
	
	if (marks >= 0 && marks <= 100){
		marks = marks /10; 
		switch(marks){
			case 10:
				printf("Grade A");
				break;
			case 9:
				printf("Grade A");
				break;
			case 8:
				printf("Grade B");
				break;
			case 7:
				printf("Grade C");
				break;
			case 6:
				printf("Grade D");
				break;
			default:
				printf("Grade F");
		}
	}else{
		printf("Invalid data, please enter the correct marks");
	}
	
	
	return 0;
}
