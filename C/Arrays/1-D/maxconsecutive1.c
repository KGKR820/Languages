#include <stdio.h>
int max1(int arr[],int size){
    int maxcount=0,count=0;
    for(int i =0;i<size;i++){
        if(arr[i]==1){
         count++;
         if(count>maxcount) maxcount=count;
        } 
    else count = 0;
    }
    return maxcount;
}

int main(){
    int size;
    printf("Enter the size of the array -> ");
    scanf("%d",&size); 
int arr[size];
for (int i = 0;i<size;i++){
    printf("1 or 0 -> ");
    scanf("%d",&arr[i]);
    }
    int result =max1(arr,size); // here max1 gives out a number so it should be stored in a box
    printf("max consecutive 1 -> %d",result);
    return 0;
}