#include <stdio.h>
#include <stdlib.h>

//prime number or not

int main () {
int n, counter=0;
printf ("please enter a number: ");
scanf("%d", &n);
    for (int i=2; i<n; i++) {
        if (n%i==0) 
        counter++; 
    }
        if (n==2)
        printf ("it's a prime number.");
        else if (counter>=1) 
        printf ("it's not a prime number.");
        else 
        printf("it's a prime number.");
    
}