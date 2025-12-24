
#include <stdio.h>

// Function to compute the determinant of a square matrix
int determinant(int **matrix, int n) {
    int det = 0;
    int sign = 1;

    // Base case: 2x2 matrix
    if (n == 2) {
        det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
        return det;
    }

    // Recursive case: nxn matrix
    for (int i = 0; i < n; i++) {
        int **minor = (int **)malloc((n - 1) * sizeof(int *));
        for (int j = 0; j < n - 1; j++) {
            minor[j] = (int *)malloc((n - 1) * sizeof(int));
        }

        // Create minor matrix
        for (int j = 1; j < n; j++) {
            int k = 0;
            for (int col = 0; col < n; col++) {
                if (col != i) {
                    minor[j - 1][k] = matrix[j][col];
                    k++;
                }
            }
        }

        // Recursive call
        det += sign * matrix[0][i] * determinant(minor, n - 1);

        // Free minor matrix
        for (int j = 0; j < n - 1; j++) {
            free(minor[j]);
        }
        free(minor);

        // Alternate sign
        sign *= -1;
    }

    return det;
}

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int **matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int det = determinant(matrix, n);
    printf("Determinant: %d\n", det);

    // Free matrix
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
