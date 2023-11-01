#include<stdio.h>
int main(){
	
	char day ; // m-Monday ; t-Tueday ; w-Wednesday ; T-Thursday ; f-Friday ; s-Saturday ; S-Sunday ; 
	printf("enter day(1-7): ");
	scanf("%s",&day);
//	scanf("%c",&day);
	
	switch(day){
		case 'm' : printf("Monday");
		break ;
		case 't' : printf("Tuesday");
		break ; 
		case 'w' : printf("Wednesday");
		break ; 
		case 'T' : printf("Thursday");
		break ; 
		case 'f' : printf("Friday");
		break ; 
		case 's' : printf("Saturday");
		break ; 
		case 'S' : printf("Sunday");
		break ; 
		default : printf("Not A Valid Day!");
	}
}