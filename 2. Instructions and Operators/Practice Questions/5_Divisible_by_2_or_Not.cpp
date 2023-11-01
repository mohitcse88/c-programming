// Write a program to check if a number is divisible by 2 or not 
#include<stdio.h>
int main(){
	// divisible -> 1
	// Not divisible -> 0 
	int n ; 
	printf("enter the number : ");
	scanf("%d",&n);
	printf("%d",n%2==0);
	
	return 0 ; 
}