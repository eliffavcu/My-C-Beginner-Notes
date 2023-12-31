#include <stdio.h>
#include <stdlib.h>

// all divisors between 2 and 50

int main () {

    for(int i=2; i<=50; i++){
        int j = 1;
        while (j <= i / 2) {
            (i % j == 0) && printf("%d ", j); // Bu satır if şartının yerine geçer.
            j++;
        }

        printf("%d\n", i); 
    }
}