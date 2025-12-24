#include <stdio.h>
int main(){
    int size;
    printf("enter the size of the array : ");
    scanf("%d",&size);
int arr[size];
for(int i =0;i<size;i++){
    printf("Element %d -> ",i+1);
    scanf("%d",&arr[i]);
}
int target;
printf("Target -> ");
scanf("%d",&target);
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
          if(i<j){
            if(arr[i] + arr[j] == target){
                printf("[%d,%d]",i,j);
            }
          }
    }
}
    return 0;
}