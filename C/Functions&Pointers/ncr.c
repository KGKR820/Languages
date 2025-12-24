#include <stdio.h>
    int fact(int x){
        int p=1;
for (int i=1;i<=x;i++){
    p = p*i;
}
return p;
    }
    int comb(int n, int r){
        return fact(n)/(fact(r)*fact(n-r));
    }
int main(){
int a;
printf("enter the velue of n =");
scanf("%d",&a);
int b;
printf("enter the velue of r =");
scanf("%d",&b);
int ncr=comb(a,b);
    printf("%d c %d is %d",a,b,ncr);


    return 0;
}