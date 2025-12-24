#include <stdio.h>
int main(){
int size;
printf("Enter the size of array -> ");
scanf("%d",&size);
int arr[size];
int* ptr = arr; // or int *ptr = &arr[0];
for(int i=0;i<size;i++){
    printf("enter the %d element -> ",i+1);
 scanf("%d",&(*(ptr+i)));
}
for(int i=0;i<size;i++){
    printf("%d ",*(ptr+i));
}
    return 0;
}