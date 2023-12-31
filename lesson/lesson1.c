#include <stdio.h>
#include <stdlib.h>

/*
*
*/
int main() {
    //sum of natural numbers until n entered by user

    int n, sum=0;
    printf("enter a number:");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
        sum+=i;

    printf("%d\n", sum);

    return 0;
}