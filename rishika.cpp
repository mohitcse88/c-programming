#include<stdio.h>

void r();
int main(){
	r();
	return 0 ; 
	
}
void r(){
	 int n = 10 ; 
	int i=n , j=n ; 
	for(i=n ; i<n ; i++){
		for(j = 0 ; j<n ; j++){
			if(i==0 || i==n-1 || j==0){
				printf("*");
			}
		}
		printf("\n");
	}
}
