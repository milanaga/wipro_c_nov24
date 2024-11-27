// product od two matrices

#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    printf("Enter rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    int mat1[rows1][cols1];
    int mat2[rows2][cols2];
    int product[rows1][cols2];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            product[i][j] = 0;
        }
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Product of the two matrices:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
