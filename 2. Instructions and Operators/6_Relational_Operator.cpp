#include<stdio.h>
int main(){
	printf("==\n");
	printf("4==4 : %d\n",4==4 ); // 1 
    printf("4==3 : %d\n",4==3 ); // 0 
    
    printf("\n!=\n");
    printf("4!=4 : %d\n",4!=4); //0
    printf("4==4 : %d\n",4==4); //1
    printf("4!=3 : %d\n",4!=3); //1
    printf("4==3 : %d\n",4==3); //0
    
    printf("\n> and >=\n");
    printf("3>4 : %d\n",3>4); //0
    printf("4>3 : %d\n",4>3); //1
    printf("4>4 : %d\n",4>4); //0 
    printf("4>=4 : %d\n",4>=4); //1		
    
    printf("\n< and <=\n");
    printf("3<4 : %d\n",3<4);
    printf("4<3 : %d\n",4<3);
    printf("3<3 : %d\n",3<3);
    printf("3<=3 : %d\n",3<=3);
	
	return 0 ; 
}