// Are the folling valid or not ?
#include<stdio.h>
int main(){
	
	int a = 8^8 ;  // valid 
	int x ; int y = x ; // valid 
	int x , y = x ;  // invalid   here, declare and using with togethers . 
	char stars = '**' ; //invalid
	
	return 0 ; 
}