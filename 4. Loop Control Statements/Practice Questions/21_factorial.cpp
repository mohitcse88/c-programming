//print the factorial of a number n 
#include<stdio.h>
int main(){
	int n ; 
	printf("enter number : "); 
	scanf("%d",&n);
	
    int fact = 1 ; 
//	for(int i=n ; i>=1 ; i--){
    for(int i=1 ; i<=n ; i++){
		fact = fact *i ; 
	}
	printf("final factorial : %d \n",fact);
	
	return 0 ; 
}