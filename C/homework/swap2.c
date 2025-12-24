#include <stdio.h>
int main(){
    int a;
printf("Enter the value of a -> ");
scanf("%d",&a);
int b;
printf("Enter the value of  b-> ");
scanf("%d",&b);
a = a-b;
b = a+b;
a = b-a;
printf("Value of a-> %d\n",a);
printf("Value of b-> %d",b);
    return 0;
}