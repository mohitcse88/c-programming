//Keep taking a number as input from user until enters an odd numbers 
#include<stdio.h>
int main(){

	int n ; 
	
	for(int i=0 ;1 ; i++){
	printf("enter number : ");
	scanf("%d",&n);	
//	if(n%2==1){
    if(n%2!=0){
		break ; 
	}
	}
	printf("Thank You\n");
	return 0 ; 
}