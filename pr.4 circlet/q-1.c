#include <stdio.h>

int main() {
    int i, p;
    int start = 41;  


    for(i = 0; i < 5; i++) { 
        for(p = 0; p <= i; p++) { 
            printf("%d ", start + p); 
        }
        printf("\n"); 
    }

    return 0;
}
