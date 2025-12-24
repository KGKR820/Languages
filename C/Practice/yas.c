#include <stdio.h>

void findTriplets(int arr[], int n) {
    int found = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == 0) {
                    printf("Triplet: %d, %d, %d\n", arr[i], arr[j], arr[k]);
                    found = 1;
                }
            }
        }
    }
    if (!found) {
        printf("No triplets found\n");
    }
}

int main() {
    int size;
    printf("Enter the size of array ->");
    scanf("%d",&size);
int arr[size]; 

for(int i=0;i<size;i++){
    printf("element %d -> ",i+1);
scanf("%d",&arr[i]);
}
    findTriplets(arr, size);
    return 0;
}
