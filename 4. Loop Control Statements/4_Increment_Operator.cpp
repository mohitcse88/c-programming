#include<stdio.h>
int main(){
//	 increment operator 
//	 ++i (pre increment ) -> increase then use 
//	 i++ (post increment ) 
    int i = 1 ; 
	printf("%d \n",i++); // 1 
	printf("%d \n\n",i); // 2
	
	i = 1 ; 
	printf("%d \n",++i); // increase then use , 2 
	printf("%d \n",i); // 2 
	
    return 0 ; 
}