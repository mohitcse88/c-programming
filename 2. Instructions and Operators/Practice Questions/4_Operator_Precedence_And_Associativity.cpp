#include<stdio.h>
int main(){
	int a = 5*2-2*3 ;  // Operator Precedence
	// (5*2-(2*3)
	// 10 - 6 
	// 4
	
	int b = 5*2/2*3 ;  // Associativity 
	// ((5*2)/2)*3) 
	
	int c = 5*(2/2)*3 ; // Associativity 
	// ((5*(2/2))*3)
	
	int d = 5+2/2*3 ;  // Associativity and Operator Precedence
	// 5+((2/2)*3)
	
	printf("a : %d\n",a); // 4 
	printf("b : %d\n",b); // 15 
	printf("c : %d\n",c); // 15
	printf("d : %d\n",d); //8
	
	return 0 ; 
}