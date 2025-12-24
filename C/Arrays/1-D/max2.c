#include <stdio.h>
#include <limits.h> 
int main(){
 int size;
    printf("Enter the size of array ->");
    scanf("%d",&size);
int arr[size]; //declaring array and its size

for(int i=0;i<size;i++){
    printf("element %d -> ",i+1);
scanf("%d",&arr[i]);
}
int max = INT_MIN;
//INT_MIN is the smallest value in an int box 
printf("%d",max);
for (int i=0;i<size;i++){
    if (arr[i]>=max) max = arr[i];
}
printf("MAx value in array -> %d",max);
    return 0;
}
