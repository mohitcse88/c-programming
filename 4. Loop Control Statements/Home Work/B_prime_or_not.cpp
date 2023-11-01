#include<stdio.h>
int main(){
	int n ; 
	printf("enter number : ");
	scanf("%d",&n);
	for(int i=4 ; i<n ; i++){
		if(n%i!=0){
			printf("%d is a prime number\n",n);
		}
		else {
		  printf("%d is not prime number\n",n);	
		}
	}
	
	return 0 ; 
}