#include <stdio.h>
int fact(int n){
    if(n==0 || n==1) return 1;
     int f = n*fact(n-1);
     return f;
}
int main(){
    int n;
printf("Enter a Number -> ");
scanf("%d",&n);
int l = fact(n);
printf("Factorial of %d -> %d",n,l);
return 0;
}