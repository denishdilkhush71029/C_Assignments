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

    printf("\nLower Triangular Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            // Condition: Row index must be greater than or equal to Column index
            if (i >= j) {
                printf("%d\t", matrix[i][j]);
            } else {
                // Elements above the diagonal are printed as 0
                printf("0\t"); 
            }
        }
        printf("\n");
    }

    return 0;
}