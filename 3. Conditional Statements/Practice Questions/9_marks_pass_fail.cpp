// write a program to check if a student is passed or failed. 
// marks >30 is PASS 
// marks <= is FAIL 

#include<stdio.h>
int main(){
	int marks ; 
	printf("enter marks(0-100): ");
    scanf("%d",&marks);
	
//    if(marks>=0 && marks<=30){
//    	printf("fail \n");
//	}else if(marks>30 && marks <=100){
//		printf("pass \n");
//	}else{
//		printf("Wrong Marks \n");
//	}
	
//	marks>30 ? printf("pass \n"): printf("fail \n");

	marks<=30 ?  printf("fail \n") : printf("pass \n");
		
	return 0 ; 
}