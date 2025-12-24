#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter the no.of integers -> ");
    scanf("%d",&n);
    // here a pointer name ptr is given to locate the size alloted for n using malloc(n*4 bytes)
int* ptr = (int*) malloc(n*sizeof(int)); //int* ptr = (int*) calloc(n,4);

// now address of memory pointed by ptr have been copied to another pointer p
// ptr -> address of the memory which it is pointing
// *ptr -> controls the value stored in the memory pointed by ptr
// here indirectly points to the first part of memory
 int* p = ptr;
 for(int i=1;i<=n;i++){
    printf("Enter %d integer ->",i);
    // values are being entered into the allocated memory through pointers
    scanf("%d",&(*ptr));
    ptr++; 
    // when ptr++ is done then it moves next part of memory
 }
 // after this ptr points the memory which is out of the allocated area 
  for(int i=1;i<=n;i++){
  printf("%d\n",*p);
  p++;
 }
 // after this p also points out os the allocated area
    return 0;
}