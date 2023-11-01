// printf 1(true) or 0(false) for following statements. 
// if it's sunday & it's snowing ->true 
// if it's monday or it's raining ->true
//If a number is a greater than 9 and less than 100 -> true  (check 2 digit number) 

#include<stdio.h>
int main(){

	int sunday = 1 , snowing = 1 ; 
	printf("%d\n",sunday && snowing); 
	
	int monday = 1 , raining = 1; 
	printf("%d\n",monday || raining);
	
	int n ; 
	printf("\nenter a number : ");
	scanf("%d",&n);
	printf("%d",(n>9)&&(n<100)); // check 2 digit number 
	
	return 0 ; 
	
}