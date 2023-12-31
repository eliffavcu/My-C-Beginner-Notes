#include <stdio.h>
#include <stdlib.h>

/*
*
*/
/*
int main () {
int number;
printf("please enter a number:");
scanf("%d", &number);

while (number!=0) {

if (number>=50)
    printf( "greater than or equals to 50.");
else
    printf("less than 50.");

}

return 0;
}
*//*
int main () {

char control;
int number;

do {
    printf("please enter a number:");
    scanf("\n%d", &number);

    if (number<0)
      printf ("negative\n");
    else if (number>0)
      printf ("positive\n");
    else
       printf ("zero\n");
    printf("do you want to continue? (y/n):");
    scanf("\n%c", &control);
}while (control=='y') ;

return 0;
}
*/
/*
int main() {
    
int daynumber;
    do {
printf("please enter a daynumber:");
scanf("%d", &daynumber);
} while (daynumber<1 || daynumber>7);

if (daynumber==1)
    printf ("monday");
else if (daynumber==2)
    printf ("tuesday");
else if (daynumber==3)
    printf ("wednesday");
else if (daynumber==4)
    printf ("thursday");
else if (daynumber==5)
    printf ("friday");
else if (daynumber==6)
    printf ("saturday");
else 
    printf ("sunday");

}
*/
/*
int main () {

    int number1, number2;
    printf("enter two numbers:");
    scanf("%d%d", &number1, &number2);

    if (number1>number2)
        printf ("the result is %d\n", (number1 - number2));
    else
    printf ("the result is %d\n", (number2 - number1));

return 0;

}
*/
/*
int main () {
    int n;
    do {
    printf("enter the grade:");
    scanf("%d", n);
} while (n<0 || n>100) ;

    if (n>=90)
        printf ("AA");
    else if (n>=85)
        printf ("BA");
    else if (n>=80)
        printf ("BB");
    else if (n>=75)
        printf ("CB");
    else if (n>=70)
        printf ("CC");
    else if (n>=65)
        printf ("DC");
    else if (n>=60)
        printf ("DD"); 
    else if (n>=55)
        printf ("FD");
    else
        printf ("FF");  
 
return 0;
}
*/

// bi şey yanlış galiba?
int main () {
    int number1, number2, number3 ;
    printf("enter three numbers:");
    scanf("%d%d%d", &number1, &number2, &number3);

    if (number1>number2 && number1>number3)
        printf ("%d\n", number1);
    else if (number2>number3 && number2>number3)
        printf ("%d\n", number2);
    else
        printf ("%d\n", number3);
    
    return 0;
}

 // sıralamayı da ekle buraya yanlış glb
/*
int main () {
    int a, b, c;
    printf ("please enter number:");
    scanf ("%d%d%d", &a, &b, &c);
    
    if (a>b) {
        if (b>c)
            printf(a>b>c);
        else
            printf(a>c>b);
    }
    else if (b>a) {
        if (a>c)
            printf(b>a>c);
        else
            printf (b>c>a);
    }
    else {
        if (a>b)
            printf(c>a>b);
        else
            printf (c>b>a);
    }

return 0;
}
*/
/*
int main () {
    int n;
    printf ("please enter year:");
    scanf ("%d", &n);

    if (n%4==0) {
        if (n%100==0) {
            if(n%400==0)
                printf ("leap year");
            else
                printf ("not a leap year");
        } else
            printf ("leap year");
    }else
        printf ("not a leap year");
    
return 0;
}
*/