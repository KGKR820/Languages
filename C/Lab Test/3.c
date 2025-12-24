#include <stdio.h>
#include <stdlib.h>
int main(){
   int size;
    printf("enter the size of array :");
    scanf("%d",&size);
    int *ptr = (int*) calloc(size,4);
    int *p = ptr+size-1; // its like ptr(address value) + (size-1)*4
    for(int i=0;i<size;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for(int i=0;i<size;i++){
        printf("%d ",*p);
        p--;
    }
}