#include <stdio.h>
#include <stdlib.h>

/*
*
*/
int main(int argc, char** argv) {

    for(int i=1;i<100;i+=2) {
         printf("%d\t", i);
        for(;i%10==9;i+=2)
            printf("\n%d\t", i+2);
    }
     printf("\n\n");

    for(int i=0;i<100;i+=10) {
        for(int j=1;j<=10;j+=2)
            printf("%d\t", (i+j));
        printf("\n");
    }

    return 0;
}