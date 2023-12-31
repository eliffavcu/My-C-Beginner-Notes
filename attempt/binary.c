#include <stdio.h>
#include <stdlib.h>

/*
int main() {

    int n;
    scanf("%d", &n);

    for(int i=n ; i>=1 ; i/=2)
        printf("%d", (i%2));

    return 0;
}
*/
// 10 luk sistemde yazdığımız binary sistem yazılımı, ama tersten bu reverse order

int main() {

//base-10 sistemde binary yazımı in real order

    int n, temp, counter=0 ;
    printf("Enter a number in base-10:");
    scanf("%d", &n);
    temp=n;
    
    for(int i=n ; i>=1 ; i/=2)
        counter++;

    for(int i=counter; i>=1 ; i--) {
        for(int j=1 ; j<i ; j++)
            temp/=2;
        printf("%d", temp%2);
        temp=n ;}
}
    


    
