#include <stdio.h>
#include <stdlib.h>
/*
int main (int argc, char** argv) {
    int a=2;

    if (a%a==0) for(;a<5;a++) printf ("+");
    if (a%a==0) for(a=2;a<8;a++) printf ("-");
    if (a%a==0) for(;a<12;a++) printf ("*");
    if (a%a==0) for(;a<15;a++) printf ("&");
    if (a%a==0) for(a=8;a<11;a++) printf ("<");
    if (a%a==0) for(;a<11;a++) printf (">");
    if (a%a==0) for(;a<10;a++) printf ("$");

    return (EXIT_SUCCESS);
}
*/
/*
int main () {

    int number=7;

    for (int i=0; i<2; i++) {
        if (number%3>1)
            number=(number%3)*2;
        else
            number=number+(number%3);
    }

    printf ("%d", number);

    return (EXIT_SUCCESS);
}
*/
/*
int main () {

    int a=2, b=3;

    for (int i=0;i<=5;i++)
        a=a+3;

    for (int i=0; i<=3; i++)
        b+=b;

    a=a%4;
    b%=3;

    printf("%d", (a+b));

    return (EXIT_SUCCESS);
}
*/

int main (int argc, char** argv) {

    int a=135792468;

    printf("%011.3lf", (double)(a/1000));

    return (EXIT_SUCCESS);
}

/*
int main (int argc, char** argv) {

    int a=14, b=6, i;

    for(i=b; i<a;i+=2)
        if(i<9) b+=a;
        else b-=a;
    printf ("%d", (b-a+i));

    return (EXIT_SUCCESS);
}
*/
/*
int main () {

    int a=2, b=5;

    while (b<5) {
        a=a+2;
        b=b+1;
    }

    while (b<6){
        a=a-2;
        b=b+1;
    }

    printf ("%d", a);

    return (EXIT_SUCCESS);
}
*/
/*
int main () {

    int a=5, b=35, c=2, i=0;

    while (a<5)
        for (i=1; i<b; i+=7)
            if (a%c==0) a%=i;
            else        a%=c;

    printf("%d", (a+i));

    return (EXIT_SUCCESS);
}
*/
/*
int main () {

    int number=16;

    if (number%3>1)
        number=(number%3)*2;
    else
        number=number+(number%3);

    printf ("%d", number);

    return (EXIT_SUCCESS);
}
*/
/*
int main () {

    int a=5, b=12, i;

    while (a<50)
        for (i=0;i<b; i+=4)
            if(a%3==0) a-=i;
            else       a+=i;

    printf("%d", a);

    return (EXIT_SUCCESS);
}
*/
/*
int main () {

    int a=5, b=10,c=2, i;

    do{
        for (i=0;i<b; i+=4)
            if(a%c==0) a-=i;
            else       a+=i;
    }while (a<10);

    printf ("%d", (a+i));

    return (EXIT_SUCCESS);
}
*/
/*
int main () {

    int a=12, b=5, i;

    for(i=b;i<a;i+=2)
        if(i<8) b+=a;
        else    b-=a;

    printf ("%d", (b-a+i));

    return (EXIT_SUCCESS);
}
*/