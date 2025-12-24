#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter the no.of integers -> ");
    scanf("%d",&n);
    int *ptr = (int*) malloc(n*4);
    // here n*4 bytes is allocated
      ptr = (int*) realloc(ptr,2*n*4);
      // here double the before amount is allocated
      // if place is not sufficient then it will take the place with data to another location
    return 0;
}