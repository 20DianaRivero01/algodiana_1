#include <stdio.h>
#include <stdlib.h>  

int main () {

    /* variables declaration */

    // for a, b and product, I declare a MAX value of 10 rows and columns.
    int a[10][10], b[10][10], product[10][10], a_rows, a_columns, b_rows, b_columns, i, j, k;
    int sum = 0;

        /* input instructions */
        printf("\nPlease, enter the rows and columns of the first matrix separated by 1 [space]: ");
        scanf("%d %d", &a_rows, &a_columns);

        printf("\nNow, enter the values of the same matrix: \n");
            //double "for cycle" to scan values from the first matrix.
            for(i = 0; i < a_rows; i++) {

                for(j = 0; j < a_columns; j++) {

                    scanf("%d", &a[i][j]);
                }
            }

        printf("\nPlease, enter the rows and columns of the second matrix: \n");
        scanf("%d %d", &b_rows, &b_columns);

        //Conditional, if this happen, the program won't run.
if(b_rows != a_columns) {

            printf("\nSorry, these matrices are not multiplied.\n");
        }else {
            printf("\nNow, enter the values of this matrix: \n");
            
            // Now again a doble "for cycle" but now to scan values from second matrix.
            for(i = 0; i < b_rows; i++) {
                for(j = 0; j < b_columns; j++) {
                    scanf("%d", &b[i][j]);
                }
            }
        }

        printf("\n");

        for(i = 0; i < a_rows; i++) {
            for(j = 0; j < b_columns; j++) {
                for(k = 0; k < b_rows; k++) {
                    //for this values, we are going to multiply them and accumulate in sum.
                    sum += a[i][k] * b[k][j];
                }
                product [i][j] = sum;
                sum = 0;
            }
        }

        printf("The result is:\n");

        for(i = 0; i < a_rows; i++){
            for(j = 0; j < b_columns; j++) {

                printf("%d ", product[i][j]);
            }
            printf("\n");
        }

        return 0;
}


