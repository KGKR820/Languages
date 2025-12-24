#include <stdio.h>
#include <stdlib.h>

int main() {
    int r1, c1;
    printf("r1,c1 -> ");
    scanf("%d %d", &r1, &c1);

    // Allocate memory for an array of pointers to rows
    int **ptr = (int **)malloc(r1 * sizeof(int *));
    for (int i = 0; i < r1; i++) {
        // Allocate memory for each row
        ptr[i] = (int *)malloc(c1 * sizeof(int));
    }

    // Input matrix elements
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("mat[%d][%d] -> ", i, j);
            scanf("%d", &ptr[i][j]);
        }
    }
  printf("Original matrix -> \n");  
 for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d ",ptr[i][j]);
        }
        printf("\n");
    }
     printf("Transpose matrix -> \n");  
 for (int i = 0; i < c1; i++) {
        for (int j = 0; j < r1; j++) {
            printf("%d ",ptr[j][i]);
        }
        printf("\n");
    } 
    // Free allocated memory
    for (int i = 0; i < r1; i++) {
        free(ptr[i]);
    }
    free(ptr);

    return 0;
}
