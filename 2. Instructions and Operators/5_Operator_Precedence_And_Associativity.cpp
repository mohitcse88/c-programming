#include<stdio.h>
int main(){
	
	// Operator Precedence 
	int x = 4+9*10 ; 
	printf("x : %d\n",x); // 94
	
	// Associativity (for same Precedence)
	int y = 4*3/6*2 ; 
	printf("y : %d",y); // 4
	
	return 0 ; 
}