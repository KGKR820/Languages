#include <stdio.h>
void oddeven(int x){  // here int x in the brackett is called parameter or argument
    if (x%2==0) printf("entered number is even");
    else printf("entered number is odd"); // for void no need to write return
} // here we are creating a function for odd even finding which can be used anywhere in the code multiple times
int main(){ // **always main function runs in the code 
int a;
printf("Enter a Number = ");
scanf("%d",&a);
oddeven(a); // here the code of oddeven function is executing
return 0;
}
