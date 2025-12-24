#include <stdio.h>
int main(){
int a,b;
printf("enter the value of a :");
scanf("%d",&a);
printf("enter the value of b :");
scanf("%d",&b);
int* ptr1 = &a;
int* ptr2 = &b;
int temp = *ptr1;
*ptr1 = *ptr2;
*ptr2 = temp;
printf("%d,%d",a,b);
    return 0;
}