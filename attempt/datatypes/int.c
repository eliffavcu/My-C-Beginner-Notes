#include <stdio.h>
#include <stdlib.h>

/*
* 
*/


int main() {
    long int sayi;
    printf("Bir uzun tamsayi girin: ");
    scanf("%ld", &sayi); // Kullanıcıdan bir uzun tamsayı okuma ve değişkene atama
    printf("Girdiğiniz uzun tamsayi: %ld\n", sayi);
    return 0;
}