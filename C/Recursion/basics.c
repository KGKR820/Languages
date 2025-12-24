#include <stdio.h>
void greet(int n){
    if(n==0) return;
    printf("Good Morning\n");
    greet(n-1);
}
int main(){
    greet(10);
    return 0;
}