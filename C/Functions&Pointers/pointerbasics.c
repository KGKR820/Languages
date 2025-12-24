#include <stdio.h>
int main(){
int x = 9;
int* ptr = &x;  // A pointer variable, with the name ptr, that stores the address of ptr
printf("%d\n",x); // value of x
printf("%p\n",ptr); // value of address stored in pointer
printf("%p\n",&x); // address of x
printf("%d\n",*ptr) // goes to address in ptr and diplays value
    return 0;
}