#include<stdio.h>
void printHelloWorld(int n){
	if(n>0){
		printf("Hello World\n0");
		printHelloWorld(n-1);
	}
}
int main(){
	int times = 10 ;
	printHelloWorld(times);
	return 0; 
}