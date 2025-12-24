#include <stdio.h>
int main(){ 
 int size;
    printf("Enter the size of array ->");
    scanf("%d",&size);
int arr[size]; //declaring array and its size

for(int i=0;i<size;i++){
    printf("element %d -> ",i+1);
scanf("%d",&arr[i]);}
int max = arr[0]; // arr[0] is the first element in array similarly arr[1] is second element......
for (int i=0;i<size;i++){
    if (arr[i]>=max) max = arr[i];
}
printf("Max value in array -> %d",max);
    return 0;
}
