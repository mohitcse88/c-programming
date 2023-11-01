#include<stdio.h>
#include<math.h>
int main(){
	
	int a = 1 , b = 2 ; 
	int sum = a + b ; 
	int multiply = a * b ; 
	int devide = a/b ; 
	
	// power 
	int power =  pow(5,6);
	printf("power : %d\n",power);
	
	// modular operator 
	printf("modular : %d",16%10); // Numerator % denominator
	printf("modular : %d",-8%3); 
	printf("modular : %d",8%3);
//	printf("modular : %d",1.6%1.0); // its do  not work on float operand 

	
	return 0 ; 
}