// Write a program to print the average of 3 numbers. 
#include<stdio.h>
int main(){
	int a , b , c , avg; 
	printf("Enter the num1 : ");
	scanf("%d",&a);
	printf("Enter the num2 : ");
	scanf("%d",&b);
	printf("Enter the num3 : ");
	scanf("%d",&c);
	
	avg = (a+b+c)/3 ; 
	
	printf("average of these numbers : %d",avg);
	
	return 0 ; 
}