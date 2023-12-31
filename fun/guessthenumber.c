#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
int main () {

int a;

        printf ("Please enter a number between 1-50:");
    do {

        scanf ("%d", &a);

        if (a==15) {
            printf ("you find the correct value."); break;
        }else if (a<20 && a>10) {
            printf ("you are soo close try more:");
        }else if (a>=20) {
            printf ("increase the number please:");
        }else {
            printf ("decrease the number please:");
        }
    } while (a!=15);

    return 0;
}*/
// kullanıcılardan biri sayı girsin diğeri onu tahmin etsin.
int main () {
    int a, b;

    srand(time(NULL));

    int randomNumber = rand () %51 ;

    randomNumber=b;
        
    do {
        printf ("Please enter a number between 0-50:");
        scanf ("%d", &a);
    } while (a>50 || a<0);

    do {
        if (a==b) {
            printf ("you find the correct value."); break;
        }else if (a<(b+5) && a>(b-5)) {
            printf ("you are soo close try more:");
        }else if (a>=(b+5)) {
            printf ("decrease the number please:");
        }else {
            printf ("inrease the number please:");
        }
        scanf ("%d", &a);
    } while (a!=b);

    return 0;
}