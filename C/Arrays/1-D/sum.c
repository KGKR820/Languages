#include <stdio.h>
int main (){
    int size,sum = 0;
    printf("Enter the size of array ->");
    scanf("%d",&size);
int arr[size]; //declaring array and its size

for(int i=0;i<size;i++){
    printf("element %d -> ",i+1);
scanf("%d",&arr[i]);

sum = sum+arr[i];
}
printf("sum of all elements in the array = %d",sum);


    return 0;
}