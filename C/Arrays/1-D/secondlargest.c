#include <stdio.h>
#include <limits.h> 
int main(){
 int size;
    printf("Enter the size of array ->");
    scanf("%d",&size);
int arr[size]; //declaring array and its size

for(int i=0;i<size;i++){
    printf("element %d -> ",i+1);
scanf("%d",&arr[i]);}
int max = INT_MIN; // arr[0] is the first element in array similarly arr[1] is second element......
//INT_MIN is the smallest value in an int box 

for (int i=0;i<size;i++){
    if (arr[i]>=max) max = arr[i];
}
printf("MAx value in array -> %d",max);
int smax = INT_MIN;
for(int i=0;i<size;i++){
    if (smax<arr[i] && arr[i] != max) smax = arr[i];
}
printf("\nSecond max value in array -> %d",smax);
    return 0;
}