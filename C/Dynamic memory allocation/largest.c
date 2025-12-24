#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(){
int size;
printf("enter the size of array -> ");
scanf("%d",&size);
int *arr = (int *)calloc(size,4);
for(int i=0;i<size;i++){
    printf("Element %d -> ",i+1);
    scanf("%d",&(*(arr+i)));
}
int l = INT_MIN;
for(int i=0;i<size;i++){
   if(*(arr+i) >= l) l=*(arr+i);
}
printf("%d",l);
free(arr);
    return 0;
}