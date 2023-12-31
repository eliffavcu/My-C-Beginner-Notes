#include <stdio.h>
#include <stdlib.h>

int main () {
    int a, counter=0, sum=0;
    scanf ("%d", &a);
    
    do{
    sum+=a;
    counter++;
    scanf ("%d", &a);
    } while (a!=0);

    printf ("%d", sum/counter);

    return 0;
}