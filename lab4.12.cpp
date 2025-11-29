#include <stdio.h>

void print_matrix(int rows, int cols, int *matrix) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%4d", matrix[i * cols + j]);
        }
        printf("\n");
    }
}

int main() {
    int Arows = 2, Acols = 3;
    int Brows = 2, Bcols = 3;
    int BTcols = 2, BTrows = 3;
    int Crows = 2, Ccols = 2; 

    int A[Arows][Acols];
    int B[Brows][Bcols];
    int BT[BTrows][BTcols];
    int C[Crows][Ccols];
    int i, j, k;

    printf("Enter elements for Matrix A (2x3):\n");
    for (i = 0; i < Arows; i++) {
        for (j = 0; j < Acols; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements for Matrix B (2x3):\n");
    for (i = 0; i < Brows; i++) {
        for (j = 0; j < Bcols; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < BTrows; i++) {
        for (j = 0; j < BTcols; j++) {
            BT[i][j] = B[j][i];
        }
    }

    for (i = 0; i < Crows; i++) {
        for (j = 0; j < Ccols; j++) {
            C[i][j] = 0;
            for (int r = 0; r < Acols; r++) {
                C[i][j] += A[i][r] * BT[r][j];
            }
        }
    }
    

    printf("\n--- MATRIX MULTIPLICATION REPORT ---\n");

    printf("\nMatrix A (2x3):\n");
    print_matrix(Arows, Acols, &A[0][0]);

    printf("\nMatrix B (2x3):\n");
    print_matrix(Brows, Bcols, &B[0][0]);

    printf("\nMatrix B Transposed (3x2):\n");
    print_matrix(BTrows, BTcols, &BT[0][0]);

    printf("\nResult Matrix C (2x2):\n");
    print_matrix(Crows, Ccols, &C[0][0]);

    return 0;
}