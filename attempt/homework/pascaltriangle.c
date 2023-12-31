#include <stdio.h>
#include <stdlib.h>


int main () {

    int numerator=1, denominator=1;
    printf("1\n");

    for(int i=1; i<=10; i++) {
        for(int j=1; j<=i; j++) {
            for (int k=i; k>=(i-j+2); k--) 
                numerator=numerator*k;
            for (int k=1; k<j; k++)
                denominator=denominator*k;
                printf("%d\t", numerator/denominator);
            
            numerator=1;
            denominator=1;
        }  
        printf("1\n");   
    }
        return EXIT_SUCCESS;
}