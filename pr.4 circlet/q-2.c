#include<stdio.h>

int main(){
	
	int i, p ;
	int rows = 4;
	int num = 11;
	
	 for(i = 1; i <=rows; i++) { 
        for(p = 1; p <= i; p++) { 
            printf("%d ",num); 
            num++;
        }
        printf("\n"); 
    }
}
