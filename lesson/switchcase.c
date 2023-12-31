#include <stdio.h>
#include <stdlib.h>

/*
int main () {

    int daynumber;
    do {
        printf ("enter a day number: ");
        scanf ("%d", &daynumber);
    } while (daynumber<1 || daynumber>7);
    
    switch (daynumber) {
        case 1: printf ("monday"); break;
        case 2: printf ("tuesday"); break;
        case 3: printf ("wednesday"); break;
        case 4: printf ("thursday"); break;
        case 5: printf ("friday"); break;
        case 6: printf ("saturday"); break;
        default : printf ("sunday");
    }

    return 0;
}
*/
/*
int main () {

    int a;
    do {
        printf ("enter a number: ");
        scanf ("%d", &a);
    } while (a<1 || a>12);

    switch (a) {
        case 1: printf ("january"); break;
        case 2: printf ("february"); break;
        case 3: printf ("march"); break;
        case 4: printf ("april"); break;
        case 5: printf ("may"); break;
        case 6: printf ("june"); break;
        case 7: printf ("july"); break;
        case 8: printf ("august"); break;
        case 9: printf ("september"); break;
        case 10: printf ("october"); break;
        case 11: printf ("novemver"); break;
        default: printf ("december") ;
    }
    return 0;
}
*/
/*
int main () {
    int a, result;
    printf ("enter a number: ");
    scanf ("%d", &a);

    switch (a%2) {
        case 0: printf ("even"); break;
        default : printf ("odd"); 
    }
    return 0;
}
*/
// kod çalışmıyor ama derleyiciden kaynaklı bir sorunmuş. normalde aralığındaki sayıyı yazdırması gerek sw'de. javada okey.
//bu sorunu çözmek için 72nd line eklendi. (good for exam)
/*
int main () {
    double a;
    printf ("please enter a number: ");
    scanf ("%lf", &a);
    int b= (int) (a*10)-(int) (a*10)%5;
    switch (b) {
        case 0: printf ("FF"); break;
        case 5: printf ("FD"); break;
        case 10: printf ("DD"); break;
        case 15: printf ("DC"); break;
        case 20: printf ("CC"); break;
        case 25: printf ("CB"); break;
        case 30: printf ("BB"); break;
        case 35: printf ("BA"); break;
        case 40: printf("AA");      
    }
    return 0;
}
*/
/*
int main () {
    double a;
    printf ("please enter a number: ");
    scanf ("%lf", &a);
    int b= (int) (a*100)-(int) (a*100)%50;
    switch (b) {
        case 00: printf ("FF"); break;
        case 50: printf ("FD"); break;
        case 100: printf ("DD"); break;
        case 150: printf ("DC"); break;
        case 200: printf ("CC"); break;
        case 250: printf ("CB"); break;
        case 300: printf ("BB"); break;
        case 350: printf ("BA"); break;
        case 400: printf("AA");      
    }
    return 0;
}
*/
// char alırken ya da string [] içine bir tane fazla sayı yazmalıyız 0 için yani eng kelmesi alacaksak 3 değil 4 yazmalıyız
// a=grade btw
/*
int main () {
    char a[3];
    // burada 3 karakter alacağız çünkü AA gibi bi grade geliyor. 2 karakter + 1 dot
    printf ("please enter a number: ");
    scanf ("%s", &a);

    // birinci karakteri değerlendirmek için 0 yazıyoruz, ikinci karakter için 1 yazacağız.
    switch (a[0]) {
        case 'A': printf ("4.0"); break;
        case 'B': switch (a[1]) {
                    case 'A' : printf ("3.5"); break;
                    case 'B' : printf ("3.0"); } break;
        case 'C': switch (a[1]) {
                    case 'B' : printf ("2.5"); break;
                    case 'C' : printf ("2.0"); } break;
        case 'D': switch (a[1]) {
                    case 'C' : printf ("1.5"); break;
                    case 'D' : printf ("1.0"); } break;
        case 'F': switch (a[1]) {
                    case 'D' : printf ("0.5"); break;
                    case 'F' : printf ("0.0"); } break;
    }
    return 0;
}
*/
/*
int main () {
    int a;
    printf ("please enter a number");
    scanf ("%d", &a);

    switch (a) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: printf("weekday"); break;
        case 6:
        case 7: printf ("weekend");
    }
    return 0;
}
*/
/*
// char olarak tek karakter alıyorsak char a[2] yazmamıza gerek yok.
int main () {
    char a;
    printf ("please enter a number: ");
    scanf ("%c", &a);
    switch (a) {
        case 'S': 
        case 's': printf ("small"); break;
        case 'M':
        case 'm': printf ("medium"); break;
        case 'L':
        case 'l': printf ("large"); break;
        case 'X':
        case 'x': printf ("xlarge"); break;
    }
    return 0;
}
*/
/*
int main () {
    char CSC;
    printf ("please enter a number: ");
    scanf ("%c", &CSC);

//it's about ASCII Table
    if (CSC>='a' && CSC<='z')
        CSC= CSC-('a'-'A');

    switch (CSC) {
        case 'S': printf ("small"); break;
        case 'M': printf ("medium"); break;
        case 'L': printf ("large"); break;
        case 'X': printf ("xlarge"); break;
    }
    return 0;
}
*/
/*
// char 5 sayısını int 5 olarak yazmak
int main () {
    char CSC='5';
    printf ("%d", CSC-'0');

    return 0;
}
*/

// in ascii table numbers in char 1-9, a-z is without break and A and a in the same line.
/*
int main () {
    char CSC[3];
    printf ("please enter a clothing size code: ");
    scanf ("%c", &CSC);


//it's about ASCII Table
    if (CSC>='a' && CSC<='z')
        CSC[3]= CSC[3]-('a'-'A');

    switch (CSC [0]) {
        case 'S': printf ("small"); break;
        case 'M': printf ("medium"); break;
        case 'L': printf ("large"); break;
        case 'X': switch (CSC[1]) {
            case '1': printf ("xlarge"); break;
            case '2': printf ("xxlarge"); break;
            case '3': printf ("xxxlarge"); break;
            case '4': printf ("xxxxlarge");
        }
        
    }
    return 0;
}
*/

// i=I in ascii
int main () {
    char C;
    printf ("please enter a character: ");
    scanf ("%c", &C);

    switch (C) {
        case 'a':
        case 'A':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u': printf ("that's a wovel"); break;
        default: printf ("that's a contonant");
    }
    return 0;
}