#include<stdio.h>
int main(){
	int age ; 
	printf("enter age : ");
	scanf("%d",&age);
	
	if(age>18){ // if part is compulsory 
		printf("adult \n");
		printf("they can vote \n");
		printf("they can drive \n");    // block -> combinational of statements 
	}
	else { // else part is not compulsory it is a optional 
		printf("not adult \n");
	}
	
	printf("thank you \n");
	
	return 0 ; 
}