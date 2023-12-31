#include <stdio.h>
#include <stdlib.h>

/*
*
*/

int main() {
    // 1 to 100
    int i=1;
    do{
        printf("%d\n", i++);
    } while (i<=100);

    return 0;
}

/*
int main() {
    // display sum of naturnal numbers until n
    int n, sum=0, i=1;
    printf("please enter a number: ");
    scanf("%d", &n);

    while(i<=n) sum+=i++;

    printf("%d\n", sum);

    return 0;
}
*/
/*
int main() {

    // display facatorial of naturnal numbers until n

    int n, fact=1, i=2;
    printf("please enter a number: ");
    scanf("%d", &n);
    i=n;
    while(i>=2) fact*=i--;

    printf("%d\n", fact);

    return 0;
}
*/
/*
int main() {

    // display natural number 1 to 100, 10 numbers per line

    int i=0, j=1;
    while (i<100) {
        while (j<=10)
            printf ("%d\t", (i+j++));
        printf("\n");
        i+=10;
        j=1; 
    }
   
    return 0;

}
*/
/*
int main() {
    // display natural number 1 to 100, 10 numbers per line
    int i=1;
    while(i<=100) {
        printf("%d\t", i++);
        while(i%10==0)
            printf("%d\n", i++);
    }

    return 0;
}
*/
/*
int main() {
// base 10 system in reveal order
    int n;
    scanf("%d", &n);
    n*=2;

    while(n>1) {
        printf("%d", ((n/=2)%2));
    }

    return 0;
}
*/
/*
int main() {
     int n, temp, counter=1, i, j;
    printf("Enter a number in base-10:");
    scanf("%d", &n);
    temp=n;

    while((temp/=2)>=1)
        counter++;
    i=counter;
    temp=n;
    while(i>=1){
        j=1;
        while(j++<i)
            temp/=2;
            printf("%d", temp%2);
            temp=n;
            i--; // i-- cannot be in the while parantesis bc we're using i in the second while 
    }

return 0;
}
*/
/*
int multiplication;
int x,y;
int main () {
    printf("please enter numbers: ");
    scanf("%d%d", &x, &y);
    int a=1;
    while(a<=x) {
        int b=1;
        while (b<=y) {
            multiplication=a*b;
            printf("%dx%d=%d\t", a, b, multiplication);
            b++;
        }
        printf("\n");
        a++;
    }
            
    return 0;
}
*/
/*
int main() {
    printf("enter C(n,k) respectively:");
    int n, k, result=1;
    scanf("%d%d", &n, &k);
    int i=n, j=k;
    while(i>(n-k))
        result*=i--;
    while(j>1)
        result/=j--;
    printf("%d", result);

return 0;
}
*/