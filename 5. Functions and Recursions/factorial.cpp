#include<stdio.h>
int main(){
	int num ; 
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	int i, factorial = 1 ; 
	for(i=num ; i>0 ; i--){
		factorial *= i ; 
	}
	printf("Factorial of %d is %d",num,factorial);
	return 0 ;
}