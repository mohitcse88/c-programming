//Print the sum of first n Natural Numbers
//also print them reverse

#include<stdio.h>
int main(){
	
	int n ; 
	printf("enter the number : ");
	scanf("%d",&n);
	
	int sum = 0 ;
	for(int i=1 ; i<=n ; i++){
//		sum = sum + i ; 
        sum+=i ; 
	}
	printf("Sum : %d \n",sum);
	for(int i=n ; i>=1 ; i--){
		printf("%d \n",i);
	}
	
//	int sum = 0 ;
//	for(int i=n ; i>=1 ; i--){
//	//sum = sum + i ;
//    sum+=i ;  
//	printf("%d \n",i);
//	}
//	printf("sum : %d \n",sum);


	
	return 0 ; 
	
}