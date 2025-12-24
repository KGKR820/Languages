#include <stdio.h>
int main(){
int size;
    printf("Enter the size of array ->");
    scanf("%d",&size);
int arr[size]; 
for(int i=0;i<size;i++){
    printf("element %d -> ",i+1);
scanf("%d",&arr[i]);
}
int sum =0;
for(int i=0;i<size;i++){
int *p = &arr[i];
sum = sum + *p;
}
printf("Sum of elements in array -> %d",sum);
    return 0;
}