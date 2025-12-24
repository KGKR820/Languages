#include <stdio.h>
void swap(int *a,int *b){ // int *a stores the address of a
int temp = *a; // temp goes to the address of a picks the value of a so then temp = a
*a=*b; // here *a goes picks b and becomes a=b
*b=temp; // now b pick temp and becomes b = temp(a)
}
int main (){
int a;
printf("Enter the value of a -> ");
scanf("%d",&a);
int b;
printf("Enter the value of  b-> ");
scanf("%d",&b);
swap(&a,&b); // &a is the address of box a similarly &b
printf("Value of a-> %d\n",a);
printf("Value of b-> %d",b);
    return 0;
}