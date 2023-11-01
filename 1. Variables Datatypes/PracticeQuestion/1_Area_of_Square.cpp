// Write a program to calculate the area of square 
// side is given 
#include<stdio.h>
int main(){
	int side ; 
	printf("enter side : ");
	scanf("%d",&side);

	int area = side * side ; 
	printf("area of square is : %d",area);
	
	return 0 ; 
}