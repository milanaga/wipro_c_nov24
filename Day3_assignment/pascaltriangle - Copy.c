 // PASCAL TRIANGLE
 

#include <stdio.h>

int main() {
    int rows, coef = 1, i, j;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1; 
            else
                coef = coef * (i - j + 1) / j; 

            printf("%d ", coef);
        }

        printf("\n"); 
    }

    return 0;
}
