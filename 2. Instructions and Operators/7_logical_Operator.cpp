#include<stdio.h>
int main(){
	
	printf("4>3&&5>2 : %d\n",4>3||5>2); //1
	printf("4>3||5>8 : %d\n",4>3||5>2); //1 
	printf("!(4>3&&5>2) : %d\n",!(4>5&&5>2)); //0
	
	
	return 0 ; 	
}