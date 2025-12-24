#include <stdio.h> //011235813
int main(){
int n,a=0,b=1,l;
printf("number -> ");
scanf("%d",&n);
printf("%d %d ",a,b);
int i=1;
while(i<=n-2){
    l=a+b;
    printf("%d ",l);
    a=b;
    b=l;
    i++;
}
    return 0;
}