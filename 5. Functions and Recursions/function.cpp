#include<stdio.h>

int sum(int a, int b);

int main(){
	int num1, num2 ; 
	printf("Enter the Number1 : ");
	scanf("%d",&num1);
	printf("Enter the Number2 : ");
	scanf("%d",&num2);
	
	int result = sum(num1, num2);
	printf("sum of %d and %d is %d",num1, num2, result);
	return 0 ; 		
}
int sum(int a, int b){
	int result = a + b ; 
	return result ; 
}