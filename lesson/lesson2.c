#include <stdio.h>
#include <stdlib.h>

/*
*
*/
int main() {

//factorial of the number entered by user

    int n, factorial=1;
    printf("enter a number:");
    scanf("%d", &n);

    for(int i=n; i>0; i--)
        factorial*=i;

    printf("%d\n", factorial);
    
    return 0;
}