#include <stdio.h>
void reverse ( int arr[],int a,int b){ //function for reversing from a to b no of digits
    int i=a-1,j=b-1;
while(i<j){ 
    int temp = arr[i];
    arr [i] = arr[j];
    arr [j] = temp;
    i++;
    j--;
}
}
int main (){
    int size;
    printf("Enter the size of the array -> ");
    scanf("%d",&size); // ex:size=5
int arr[size];
for (int i = 0;i<size;i++){
    printf("Element %d -> ",i+1);
    scanf("%d",&arr[i]); // arr[]={3,4,1,2,5}
}
printf("original array -> ");
for (int i = 0;i<size;i++){
    printf("%d ",arr[i]);
}
// // reverse the array
// int i=0,j=size-1;
// while(i<j){
//     int temp = arr[i];
//     arr [i] = arr[j];
//     arr [j] = temp;
//     i++;
//     j--;
// }
reverse (arr,1,size);
printf("\nReversed array -> ");
for (int i = 0;i<size;i++){
    printf("%d ",arr[i]); // arr[]={5,2,1,4,3}
}
int k;
printf("\nEnter the turn to rotate -> ");
scanf("%d",&k); // ex: k=8 -> 8%5=3 -> k=3
if (k>size) k=k%size;
reverse (arr,1,k);  // from from 1st(0th) number to k(k-1) number
// arr[]= {1,2,5,4,3}
reverse (arr,k+1,size);
// arr[]= {1,2,5,3,4}
printf("Rotated array -> ");
for (int i = 0;i<size;i++){
    printf("%d ",arr[i]);
}
    return 0;
}


  // output:
//   Enter the size of the array -> 5
// Element 1 -> 3
// Element 2 -> 4
// Element 3 -> 1
// Element 4 -> 2
// Element 5 -> 5
// original array -> 3 4 1 2 5
// Reversed array -> 5 2 1 4 3
// Enter the turn to rotate -> 3
// Rotated array -> 1 2 5 3 4