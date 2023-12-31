#include <stdio.h>
#include <stdlib.h>

int main () {
//10*20 row by row
    int array [10][20];

    for (int i=0; i<10; i++)  // for 2nd dimension
        for (int j=0; j<20; j++)
            array [i][j]=20*i+j+1;
    

    for (int i=0; i<10; i++) { // for 1st dimension
        for (int j=0; j<20; j++)
            printf ("%-4d", array [i][j]);
    printf ("\n");
    }
    return 0;
}
/*
int main () {
//20*10
   int array [10][20];

    for (int i=0; i<10; i++)  // for 2nd dimension
        for (int j=0; j<20; j++)
            array [i][j]=20*i+j+1;
    

    for (int i=0; i<20; i++) { // for 1st dimension
        for (int j=0; j<10; j++)
            printf ("%-4d", array [j][i]);
    printf ("\n");
    }
    return 0;
}
*//*
int main () {
//10*20 column by column
    int array [10][20];

    for (int i=0; i<20; i++)  // for 2nd dimension
        for (int j=0; j<10; j++)
            array [j][i]=10*i+j+1;
    

    for (int i=0; i<10; i++) { // for 1st dimension
        for (int j=0; j<20; j++)
            printf ("%-4d", array [i][j]);
    printf ("\n");
    }
    return 0;
}
*//*
int main () {
//20*10 column by column
    int array [10][20];

    for (int i=0; i<20; i++)  
        for (int j=0; j<10; j++)
            array [j][i]=10*i+j+1;
    

    for (int i=0; i<20; i++) { // for 1st dimension
        for (int j=0; j<10; j++)
            printf ("%-4d", array [j][i]);
    printf ("\n");
    }
    return 0;
}
*//*
int main () {
//practise 5
    int array1 [10][10], array2 [10][10], array3 [10][10];

    for (int i=0; i<10; i++)
        for (int j=0; j<10; j++) {
            array1 [i][j]=i+1;
            array2 [i][j]=j+1;
            array3 [i][j]=(i+1)*(j+1);
        }
    for (int i=0; i<10; i++) { 
        for (int j=0; j<10; j++)
            printf ("%d\t", array1 [i][j]);
    printf ("\n");
    }
    for (int i=0; i<10; i++) { 
        for (int j=0; j<10; j++)
            printf ("%d\t", array2 [i][j]);
    printf ("\n");
    }
    for (int i=0; i<10; i++) { 
        for (int j=0; j<10; j++)
            printf ("%d\t", array3 [i][j]);
    printf ("\n");
    }
    for (int i=0; i<10; i++) { 
        for (int j=0; j<10; j++)
            printf ("%2dx%2d=%3d  ", array1 [i][j], array2 [i][j], array3 [i][j]);
    printf ("\n");
    }
    return 0;
}
*//*
#include <stdbool.h>

int main () {

    int integerArray [3][4] = {{1,2,3,4}, {2,3,4,5}, {7,8,9,6}};
    int booleanarray [3][4];

    for (int i=0; i<3; i++)
        for (int j=0; j<4; j++)
            if (integerArray [i][j]%2==0)
                booleanarray [i][j] = true;
            else
                booleanarray [i][j] = false;

    for (int i=0; i<3; i++) {
        for ( int j=0; j<4; j++)
            printf ("%3d", booleanarray [i][j]);
        printf ("\n");
    }

    return 0;
}
*//*
int main () {

    double scores [5][6] = {{25, 96, 85, 74, 0}, {52, 75, 95, 86, 0}, {85, 96, 41, 76, 0}, {52, 61, 53, 85, 0}, {86, 94, 75, 86,0}};
    // 5 students 20 strings
    char names [5][20] = {"Ali Mavi", "Merve Turuncu", "Ahmet Sari", "Cansu Beyaz", "Deniz turkuaz"};

    for ( int i=0; i<5; i++)
        scores [i][4] = scores [i][0]*0.1 + scores [i][1]*0.1 + scores [i][2]*0.4 + scores [i][3]*0.4;

    printf("%-15s%-12s%-12s%-12s%-12s%-12s\n", "Name-Surname", "Homework 1", "Homework 2", "Midterm", "Final", "TAG");

    for (int i=0; i<5; i++) {
        printf("%-15s", names [i]);
        for (int j=0; j<4; j++)
            printf ("%-12.0lf", scores [i][j]);
        printf ("%-12.2lf\n", scores [i][4]);
    }

    return 0;
}
*//*
int main () {

    char ch [5][5] = {{'a','b','1','-','G'}, {'w','T','8','R','y'}, {'h','i','&','%','0'}, {'+','b','d','D','B'}, {'F','f','i','2','c'}};

    for (int i=0; i<5; i++) 
        for ( int j=0; j<5; j++)
            if ( ch [i][j]>='A' && ch [i][j]<='Z')
                ch [i][j]-=('A'-'a');
            else if ( ch [i][j]>='a' && ch [i][j]<='z')
                ch [i][j]+=('A'-'a');

    return 0;
}*/