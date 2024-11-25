 // PASCAL TRIANGLE
 
 
 #include<stdio.h>

int main() {
    int rows = 0;
    int i = 0;
    int j = 0;
    int coef = 1;

    printf("Enter the number of rows to be printed in pascal triangle: ");
    scanf("%d", & rows);

    for(i =0; i<rows; i++)
    {
        for(j = 1; j<rows - i-1; j++)
        {
            printf(" ");
        }
        for(j=0; j<=i; j++)
        {
            if(j==0 || i==0)
                coef = 1;
            else
                coef = coef*(i-j+1) / j;
                printf("%4d", coef);
        }   
         printf("\n");   
        }
    }

    


/*#include <stdio.h>

int main() {
    int rows, coef = 1, i, j;

    // Input number of rows
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        // Print leading spaces for formatting
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // Print numbers in the current row
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1; // First and last elements are always 1
            else
                coef = coef * (i - j + 1) / j; // Compute using nCr formula

            printf("%d ", coef);
        }

        printf("\n"); // Newline for the next row
    }

    return 0;
}
*/