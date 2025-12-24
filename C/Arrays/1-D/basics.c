#include <stdio.h>
int main (){
int arr[]={1,2,3,4,5,2,3,4,4};
int n = sizeof (arr)/sizeof(arr[0]); // size of arr = 4 bytes*no.of elements 
printf("%d",n);
    return 0;
}