#include <stdio.h>

void selectionSort(int arr[], int size) {
    int i, j, min_idx;
    for (i = 0; i < size; i++) { 
        min_idx = i;
        for (j = i + 1; j < size; j++) { 
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        
        int temp = arr[min_idx];
        arr[min_idx] = arr[i]; 
        arr[i] = temp; 
    }
}

int main() {
    int n, i;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n]; 
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    selectionSort(arr, n);
    printf("Sorted array: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
