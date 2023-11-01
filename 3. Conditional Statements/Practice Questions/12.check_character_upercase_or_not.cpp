// write a program to find if a character entered by user is upercase or not. 
#include<stdio.h>
int main(){
	char ch ; 
	printf("enter character : ");
	scanf("%s",&ch);
	
	//    if(ch >= 65 && ch<=90){
	if(ch>='A' && ch<='Z'){
		printf("uper case \n");
	}else if(ch>='a' && ch<='z'){
		printf("lower case \n");
	}else {
		printf("not english latter \n");
	}
	
	return 0 ; 
}