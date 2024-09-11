#include<stdio.h>

int main(){
	int n;
	printf("Enter a positive n : ");
	scanf("%d",&n);
	
	if(n<=0){
		printf("Error, please enter a postive Number.");
	}else{
		switch(n){
			case 1:
				printf("One");
				break;
			case 2:
				printf("Two");
				break;
			case 3:
				printf("Three");
				break;
			case 4:
				printf("Four");
				break;
			case 5:
				printf("Five");
				break;
			case 6:
				printf("Six");
				break;
			case 7:
				printf("Seven");
				break;
			case 8:
				printf("Eight");
				break;
			case 9:
				printf("Nine");
				break;
			default:
				printf("n is greater 9");
		}
	}
	
	return 0;
}
