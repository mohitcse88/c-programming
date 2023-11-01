//print all the odd number from 5 to 50 
#include<stdio.h>
int main(){
	int count = 0 ; 
	for(int i=5 ; i<=50 ; i++){
		if(i%2!=0){
			printf("%d\n",i);
			count++;
		}
	}
	printf("Total Odd Number : %d",count);
	
	return 0 ; 
}