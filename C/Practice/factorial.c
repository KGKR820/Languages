#include <stdio.h>
int main(){
int n,l=1;
printf("number -> ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    l=l*i;
}
printf("Factorial of %d = %d",n,l);
    return 0;
}