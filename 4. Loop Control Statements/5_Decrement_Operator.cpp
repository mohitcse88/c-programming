#include<stdio.h>
int main(){
//	decrement operator 
//  --i (pre decrement) -> increase then use 
//  i--(post decrement) -> use then increase 


    int i = 1 ; 
    printf("%d \n",i--);  // 1
    printf("%d \n\n",i);  // 0
    
    i=1 ;
    printf("%d \n",--i);  // 0 
    printf("%d \n",i);    // 1 
    
    return 0 ; 

}