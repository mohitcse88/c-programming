//keep taking numbers as input from user until user enters a number which is multiple by 7 

#include<stdio.h>
int main(){
	
	int n ;
	do{
		printf("enter number : ");
		scanf("%d",&n);
		if(n%7==0){ // multiple 7 
			break ; 
		}
	}while(1);
	
	printf("Thank You"); 
	
}