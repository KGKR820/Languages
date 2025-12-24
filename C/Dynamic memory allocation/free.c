#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter the no.of integers -> ");
    scanf("%d",&n);
    int *ptr = (int*) malloc(n*4);
    free(ptr); // memory is deallocated 

  // if we free the first block of allocated memory it deallocates
  // ex: ptr++
   //    free(ptr); ERROR

    return 0;
}