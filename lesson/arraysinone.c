#include <stdio.h>
#include <stdlib.h>

/*
int main () {
    int array [20];

    for (int i=0; i<20; i++)
        array [i] = i+1;

    for (int i=0; i<20; i++)
        printf ("%d\n", array [i]);

    return 0;
}
*/
/*
int main () {
    int array [20];

    for (int i=0; i<20; i++)
        array [i]=(i+1)*2;

    for (int i=0; i<20; i++)
        printf ("%d\n", array [i]);   

    return 0;
}
*/
/*
int main () {
    int array [20];

    for (int i=0; i<20; i++)
        array [i]=(i*2)+1;

    for (int i=0; i<20; i++)
        printf ("%d\n", array [i]);

    return 0;
}
*/
/*
int main () {


    int array [10];
    double sum=0;

    for (int i=0; i<10; i++){
        printf ("please enter the %d. number", i+1);
        scanf ("%d", &array[i]);
        sum+=array[i];
    }

    printf ("the avarage is %.2lf.", sum/10);

    return 0;
}
*/
/*
int main () {

    int array [10] = {1,-2,3,-4,5,-6,7,-8,9,-10};

    for (int i=0; i<10; i++)
        if (array[i]<0)
            printf ("%d\n", array[i]);

    for (int i=0; i<10; i++)
        if (array[i]>0)
            printf ("%d\n", array [i]);

    return 0;
}
*/
/*
int main () {
    int array[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int lenght = sizeof (array)/sizeof(array[0]);
    int reverseofarray[lenght];

    for (int i=0; i<lenght; i++)
        reverseofarray[i]=array[lenght-i-1];

    for (int i=0; i<lenght; i++)
        printf("%d\n", reverseofarray[i]);

    return 0;
}

*//*
int main () {
    short a;
    int b;
    long long c;
    double d;
    printf ("%d\n%d\n%d\n%d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
    return 0;
}
*/
/*
int main () {

    int array[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,156};
    int lenght = sizeof (array)/sizeof(array[0]);
    int max=array[0];
//max=0 olamaz çünkü negatif sayılar içeriyorsa highest number'ı bulamazsın.
    for (int i=1; i<lenght; i++)
        if (max<array[i])
            max=array[i];

    printf ("%d", max);

    return 0;
}
*/
/*
int main () {
    int array[15] = {1,2,3,4,5,6,7,8,-9,10,11,12,13,14,-156};
    int lenght = sizeof (array)/sizeof(array[0]);
    int max=array[0], min=array[0], nofdigits=0;

    for(int i=0; i<lenght; i++) {
        if (max<array[1])
            max=array[i];
        else if (min>array[i])
            min=array[i];
    }
    if ((-1)*min>max)
        max=(-1)*min;
    
    while (max>0) {
        max/=10;
        nofdigits++;
    }

    printf("%d", nofdigits);

    return 0;
}
*/
/*
int main () {

    int array[15] = {1,2,3,4,5,6,7,8,-9,10,11,12,13,14,-156};
    int lenght = sizeof (array)/sizeof(array[0]);
    int evens;

    for (int i=0; i<lenght; i++) {
        if (array[i]%2==0)
            evens++;
    }

    printf ("there is %d even number. ", evens);
    printf ("\tthere is %d odd numbers. ", lenght-evens);

    return 0;
}
*/

int main () {

    int array1[15] = {1,2,3,4,5,6,7,8,-9,10,11,12,13,14,-156};     int array2[15] = {1,35,3,11,77,6,7,8,-9,9,4,12,13,14,-156};
    int lenght1 = sizeof (array1)/sizeof(array1[0]), lenght2 = sizeof (array2)/sizeof(array2[0]);
    
    printf ("%10s%10s%10s\n", "Number", "1.Array", "2.Array");

    for (int i=0; i<lenght1; i++) {
        for (int j=0; j<lenght2; j++)
        if (array1[i]==array2[j])
            printf ("%10d%10d%10d\n", array1[i], i+1, j+1);

    }

    return 0;
}