#include<stdio.h>

int main(){
    float a,b,sol;
    char optor;
    printf("enter number A ");
    scanf("%f", &a);
    printf("enter number B ");
    scanf("%f", &b);
    printf("enter the operator");
    fflush(stdin);
	scanf("%c", &optor);
    
    switch(optor){
    	case '+':
    		sol = a + b;
    		printf("Answer is %f", sol);
    		break;
    	case '-':
    		sol = a - b;
    		printf("Answer is %f", sol);
    		break;
    	case '/':
    		sol = a / b;
    		printf("Answer is %f", sol);
    		break;
    	case '*':
    		sol = a * b;
    		printf("Answer is %f", sol);
    		break;
    	default:
    		printf("invalid function");
    		
	}
	return 0;
}
