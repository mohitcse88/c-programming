// Write a program to check if a number is even or odd . 
#include<stdio.h>
int main(){
	// even -> 1
	// odd -> 0 
	int n ; 
	printf("enter the number : ");
	scanf("%d",&n);
	printf("%d",n%2==0);
	
	return 0 ; 
}