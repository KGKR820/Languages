#include <stdio.h>
// void print(int arr[],int size){
//       for(int i=0;i<size;i++){
//          printf("%d ",arr[i]);
//       }
//     }

// // using pointers

void print(int *arr,int size){
    for(int i=0;i<size;i++){
      printf("%d ",*(arr+i));
    }
}
int main(){
int size;
printf("Enter the size of array -> ");
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++){
   printf("Element %d -> ",i+1);
   scanf("%d",&arr[i]);
}
print(arr,size);
    return 0;
}