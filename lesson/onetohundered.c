#include <stdio.h>
#include <stdlib.h>

/*

//bir satırda on sayı olmak üzere 1'den 100'e kadar sayıların yazımı

int main() {

        for(int i=1 ; i<100 ; i++) {
             printf("%d\t", i);
             for(; i%10==9; i+=1)
                printf("%d\n", i+1);
        }

        return 0;
}

*/
/*
int main() {

    for(int i=0 ; i<100 ; i+=10) {
        for(int j=1 ; j<=10 ; j+=1)
            printf("%d\t", (i+j));
        printf("\n");
    }
    return 0;

}
*/
/*
// odd numbers

int main() {

    for(int i=0 ; i<100 ; i+=10) {
        for(int j=1 ; j<=10 ; j+=2)
            printf("%d\t", (i+j));
        printf("\n");
    }

    return 0;
}
*/
/*
int main() {

        for(int i=1 ; i<99 ; i+=2) {
             printf("%d\t", i);
             for(; i%10==9; i+=2)
                printf("\n%d\t", i+2);
        }
        printf("99");
        return 0;
}
*/
/*
int main() {

        for(int i=1 ; i<99 ; i+=2) {
             printf("%d\t", i);
             for(; i%10==7; i+=2)
                printf("%d\n", i+2);
        }

        return 0;
}
*/

/*
//even numbers
int main() {

    for(int i=1 ; i<100 ; i+=10) {
        for(int j=1 ; j<=10 ; j+=2)
            printf("%d\t", (i+j));
        printf("\n");
    }

    return 0;
}
*/


int main() {

        for(int i=2 ; i<100 ; i+=2) {
             printf("%d\t", i);
             for(; i%10==8; i+=2)
                printf("%d\n", i+2);
        }
    //    printf("100");
        return 0;
}

