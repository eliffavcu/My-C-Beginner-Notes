#include <stdio.h>
#include <stdlib.h>

/*
* 
*/

float division;
float x,y;
int main () {
    printf("please enter your mass (kg) and height (m) in order: ");
    scanf("%f %f", &x, &y);
        division=x/(y*y);
        printf("%.2f\t", division); 

    if (division<=18.5){
        printf("Your body mass index is below the required value.");
    }
    else if (division<24.9 && 18.5<division) {
        printf("Your body mass index is at the required value.");   
    }
    else {
        printf("Your body mass index is above the required value.");
    }
    return 0;
}