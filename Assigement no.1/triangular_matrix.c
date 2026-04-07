#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nUpper Triangular Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            // Condition: Row index must be less than or equal to Column index
            if (i <= j) {
                printf("%d\t", matrix[i][j]);
            } else {
                // Print 0 or space for elements below the diagonal
                printf("0\t"); 
            }
        }
        printf("\n");
    }

    return 0;
}