#include <stdio.h>
#include <stdlib.h>

/*
int multiplication;
int main () {
    for (int a=1; a<=10; a++) {
        for (int b=1; b<=10; b++){
          multiplication=a*b;
          printf("%d\t", multiplication);  
        }
        printf("\n");
            }
            
    return 0;

}
*/

int multiplication;
int x,y;
int main () {
    printf("please enter numbers: ");
    scanf("%d %d", &x, &y);
    for (int a=1; a<=x; a++) {
        for (int b=1; b<=y; b++){
          multiplication=a*b;
          printf("%d*%d=%d\t", a,b, multiplication);  
        }
        printf("\n");
            }
            
    return 0;

}