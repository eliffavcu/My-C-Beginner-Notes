#include <stdio.h>
#include <stdlib.h>

/*
*
*/
int main(int argc, char** argv) {

 int N1, N2;
 printf ("please enter numbers:");
 scanf("%d%d", &N1, &N2);
 printf("%015d", N1+N2);
printf("\n%15d", N1+N2);
printf("\n%-+15d", N1+N2);
printf("\n%+15d", N1+N2);
printf("\n-%-15d", N1+N2);
printf("\n%15d", -1*(N1+N2));

 return (EXIT_SUCCESS);
}