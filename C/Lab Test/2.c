#include <stdio.h>
int main(){
    int x,y;
  printf("enter the value of x: ");
    scanf("%d",&x);
     printf("enter the value of y: ");
    scanf("%d",&y);
    int *ptr1 = &x;
    int *ptr2 = &y;
    int sum = x+y;
   int diff;
   if(x-y>=0){
    diff = x-y;
   }
   else if(x-y <= 0){
    diff = y-x;
   }
    int* ptr3 = &sum;
    int* ptr4 = &diff;
    *ptr1 = *ptr3;
     *ptr2 = *ptr4;
     printf("x:%d,y:%d",x,y);

}