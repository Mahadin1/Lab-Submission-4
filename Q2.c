#include<stdio.h>
 int main(){
 	char vl;
 	printf("Enter a vowel :  ");
 	scanf("%c", &vl);
 	
 	if (vl == 'a' || vl == 'e' || vl == 'i'  || vl == 'o' || vl == 'u'){
 		printf("The character you entered is vowel");
	}else {
		printf("The character you entered is not a vowel");
	}
	return 0;	
}  
