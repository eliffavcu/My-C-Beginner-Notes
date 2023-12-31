#include <stdio.h>
#include <stdlib.h>

int main () {

    int n, k=1, i, j, m;

    printf("please enter a number: ");
    scanf("%d", &n);
    
    int array [n][n];
    // m tur sayısı olacak 4x4 için 2 kez dönüş yapacak tour 0 = araay[0][0] tour 1 = array[1][1]
    for (m=0; m<=n/2; m++) {
        for (i=m, j=m; j<n-m; j++) {
            array[i][j]=k++;}
    //i=0 ama ikinci satıra geçmeli. j=4 oldu ama noluyo? bi geri gelmeli.->
        j--; i++;
        for (; i<n-m; i++) {
            array[i][j]=k++;}
    //i=4, j=3. j azalacak şimdi i 3 e geri düşsün.|
        i--; j--;
    //başlangıç değerin bitiş değerin olmalı. başl. i=0+tour number so j>=0+tour olacak
        for (; j>=m; j--) {
            array[i][j]=k++;}
    //i=3, j=-1. i azalacak <-
        i--; j++;
        for (; i>m; i--) {
            array[i][j]=k++;}
    // ^
    }

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++)
            printf ("%-4d", array[i][j]);
    printf ("\n");}

    return 0;
}

// bir de şu isteniyor içten dışa doğru yazsın ss i var tablette istenen çıktının.

/*
int main () {

    int array [5]={6,8,1,-5,4};
    int temp;
    for (int i=0; i<4; i++)
        for ( int j=i+1; j<5; j++)
            if (array[i]>array[j]) {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
    for (int i=0; i<5; i++)
        printf("%d\n", array[i]);

    return 0;
}
*//*
int main () {

    int array [5]={6,8,1,-5,4};
    int max=array[0], min=array[0];

    for (int i=0; i<10; i++){
        if(max<array[i])
            max=array[i];
        else if(min>array[i])
            min=array[i];
    }

    printf("%d\n", max-min);

    return 0;
}
*//*
int main () {

    int array [5]={6,8,1,-5,4};
    //nof=number of
    int nofevens=0, nofodds=0;

    for (int i=0; i<5; i++) {
        if (array[i]%2==0)
            nofevens++;
        else 
            nofodds++;
    }

    int evensarray[nofevens], oddsarray[nofodds];
    nofevens=0, nofodds=0;

    for (int i=0; i<5; i++) {
        if (array[i]%2==0)
            evensarray[nofevens++]=array[i];
        else
            oddsarray[nofodds++]=array[i];
    }

    for (int i=0; i<nofevens; i++)
        printf("%d\n", evensarray[i]);
    printf("\n\n");
    for (int i=0; i<nofodds; i++)
        printf("%d\n", oddsarray[i]);

    return 0;
}
*//*
int main () {

    int array [5]={55,5,6,5,7};
    int mode[5];
    for (int i=0; i<5; i++)
        mode[i]=0;

    for (int i=0; i<4; i++)
        for (int j=i; j<5; j++)
            if(array[i]==array[j])
                mode[i]++;

    int max=0, index;
    for (int i=0; i<5; i++)
        if(max<=mode[i]) {
            max=mode[i];
            index=i;
        }
    printf ("%d\t%d", array[index], mode[index]);
    return 0;
}*/