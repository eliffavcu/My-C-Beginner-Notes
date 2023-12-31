#include <stdio.h>
#include <stdlib.h>
/*
int main () {
// 3*5*7 row by row
    int array [3][5][7];

    for ( int k=0; k<3; k++)// for last dimension
        for (int i=0; i<5; i++)  
            for (int j=0; j<7; j++)
                array [k][i][j]=7*5*k + 7*i + j+1;
    
    for ( int k=0; k<3; k++) {
        for (int i=0; i<5; i++) { // for last dimension
            for (int j=0; j<7; j++)
                printf ("%-4d", array [k][i][j]);
            printf ("\n");}
        printf ("\n\n");}
    return 0;
}
*//*
int main () {
// 3*5*7 column by column
    int array [3][5][7];

    for ( int k=0; k<3; k++)// for last dimension
        for (int i=0; i<7; i++)  
            for (int j=0; j<5; j++)
                array [k][j][i]=7*5*k + 5*i + j+1;
    
    for ( int k=0; k<3; k++) {
        for (int i=0; i<5; i++) { // for last dimension
            for (int j=0; j<7; j++)
                printf ("%-4d", array [k][i][j]);
            printf ("\n");}
        printf ("\n\n");}
    return 0;
}
*//*
int main () {
    int array [3][5][7];

    for ( int i=0; i<7; i++)// for last dimension
        for (int j=0; j<5; j++)  
            for (int k=0; k<3; k++)
                array [k][j][i]= 21*i + 3*j + k+1;
    
    for ( int i=0; i<3; i++) {
        for (int j=0; j<5; j++) { 
            for (int k=0; k<7; k++)
                printf ("%-4d", array [i][j][k]);
            printf ("\n");}
        printf ("\n\n");}
    return 0;

}*/
/*
int main () {
    // Course A scores Course B scores Course C scores 3x5x6
    double Array [3][5][6]= {{{1,25,96,85,74,0},{2,52,75,95,86,0},{3,85,96,41,76,0},{4,52,61,53,85,0},{5,86,94,75,86,0}}, {{1,75,84,96,52,0},{2,15,42,96,85,0},{3,75,41,85,94,0},{4,25,65,74,85,0},{5,75,84,96,42,0}}, {{1,74,85,96,41,0},{2,15,45,85,96,0},{3,25,68,45,75,0},{4,52,75,96,75,0},{5,45,86,95,74,0}}};

    for ( int i=0; i<3; i++){
        for (int j=0; j<5; j++) {
            Array[i][j][5] = Array [i][j][1]*0.1 + Array [i][j][2]*0.1 + Array [i][j][3]*0.4 + Array [i][j][4]*0.4;
        }
    }
         
/*
        for (iny i=0; i<3 ; i++) {
            printf ("\n");
            swtich (i) {
                case 0:printf("Course A scores:\n"); break;
                case 1:printf("Course B scores:\n"); break;
                case 2:printf("Course C scores:\n");
            }
        }


    char courses[3][15] = {"CP", "MATH", "PHY"};
    for ( int i=0; i<3; i++) {
        printf("\nCourse %s Scores:\n", courses[i]);
        printf("%-12s%-12s%-12s%-12s%-12s%-12s\n", "Std.Number", "Homework 1", "Homework 2", "Midterm", "Final", "TAG");
        for (int j=0; j<5; j++) { 
            printf ("%-12.0f", Array[i][j][0]);
            for (int k=1; k<6; k++) {
                printf ("%-12.2f", Array[i][j][k]);
            }
        printf ("\n");
        }
    }
    return 0;
}*/

int main () {

//find the lenght of each dimension and assign them to different integer variables.

    int Cars [7][10][3][12][5][5];

    int lenght_dim1 = sizeof(Cars[0][0][0][0][0])/sizeof(Cars[0][0][0][0][0][0]),
        lenght_dim2 = sizeof(Cars[0][0][0][0])/sizeof(Cars[0][0][0][0][0]),
        lenght_dim3 = sizeof(Cars[0][0][0])/sizeof(Cars[0][0][0][0]),
        lenght_dim4 = sizeof(Cars[0][0])/sizeof(Cars[0][0][0]),
        lenght_dim5 = sizeof(Cars[0])/sizeof(Cars[0][0]),
        lenght_dim6 = sizeof(Cars)/sizeof(Cars[0]);

//display all the numbers in the cars array

    for (int i=0; i<lenght_dim6; i++) {
        printf("\n%d. Region\n", (i+1));
        for (int j=0; j<lenght_dim5; j++) {
            printf("\n%d. city\n", (j+1));
            for (int k=0; k<lenght_dim4; k++) {
                printf("\n%d. branch\n", (k+1));
                for (int l=0; l<lenght_dim3; l++) {
                    printf("\n%d. month\n", (l+1));
                    for (int m=0; m<lenght_dim2; m++) {
                        printf("\n%d. model\n", (m+1));
                        for (int n=0; n<lenght_dim1; n++) {
                            printf("%12.2lf", Cars[i][j][k][l][m][n]);
    }   }   }   }   }   }

//calculate and display the total stock of the first region in january for all models in the cars array

    int sum=0;
    for (int j=0; j<lenght_dim5; j++) {
        for (int k=0; k<lenght_dim4; k++) {
            for (int m=0; m<lenght_dim2; m++) {
                sum+=Cars[i][j][k][l][m][0];
    }   }   }
    printf ("total stock in january in the first region is %d", sum);

// calculate and display the total profit in the cars array

    double total_profit=0;
    for (int i=0; i<lenght_dim6; i++) {
        for (int j=0; j<lenght_dim5; j++) {
            for (int k=0; k<lenght_dim4; k++) {
                for (int l=0; l<lenght_dim3; l++) {
                    for (int m=0; m<lenght_dim2; m++) {
                        for (int n=0; n<lenght_dim1; n++) {
                            total_profit+= Cars[i][j][k][l][m][4];
    }   }   }   }   }   }
    printf ("total profit in 2023 is %.2lf.", total_profit);

// calculate and display the avarage number of model 3 cars sold for the cities in the cars array

    double total_sales=0;
    for (int i=0; i<lenght_dim6; i++) {
        for (int j=0; j<lenght_dim5; j++) {
            for (int k=0; k<lenght_dim4; k++) {
                for (int l=0; l<lenght_dim3; l++) {
                            total_sales+=Cars[i][j][k][l][2][1];
    }   }   }   }   
    double total_cities = lenght_dim6*lenght_dim5;
    printf ("avarage sales of model 3 is %.2lf.", total_sales/total_cities);

    return 0;
}