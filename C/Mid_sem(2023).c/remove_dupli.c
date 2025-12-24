#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of array ->");
    scanf("%d",&size);
int arr[size]; 
for(int i=0;i<size;i++){
    printf("element %d -> ",i+1);
scanf("%d",&arr[i]);
}
for(int i=0;i<size;i++){
  for(int j=0;j<size;j++){
    if(arr[i]<=arr[j]){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
  }
}
    int output[size];
    int j = 0;

    for (int i = 0; i < size; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            output[j++] = arr[i];
        }
    }

    printf("Output array: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", output[i]);
    }
    return 0;
}
