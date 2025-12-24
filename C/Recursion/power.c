#include <stdio.h>
int power(int a,int b){
   if(b==0) return 1;
     int p = a*power(a,b-1);
     return p;
}
int main(){
printf("Enter a -> ");
    int a,b;
    scanf("%d",&a);
    printf("Enter power -> ");
    scanf("%d",&b);
    int l=power(a,b);
printf("%d power %d -> %d",a,b,l);
return 0;
}