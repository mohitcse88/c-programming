#include<stdio.h> // preprocessor directives 
int sum(int a, int b); //function declaration 

int main(){
	int a=4, b=8; 
	
	int result = sum(a,b); // function call and store return value 
	printf("%d",result);
	return 0 ; 	
}
int sum(int a, int b){ // function definition  
	return a+b;
}