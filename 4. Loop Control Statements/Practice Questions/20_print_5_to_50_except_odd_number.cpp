//print all the odd number from 5 to 50 

#include<stdio.h>
int main(){
		int count=0 ; 
	for(int i=5 ; i<=50 ; i++){
		if(i%2==0){ // skip 
			continue ; 
		}
	    if(i%2!=0){ // count the odd number 
	         count++;	
		}
		printf("%d\n",i);
	}
	printf("Total Odd Number : %d\n",count);
	
	return 0 ; 
}