#include <stdio.h>
void sum1(int n,int sum){
    if(n==0){
       printf("Sum -> %d",sum);
        return ;
    }
    sum1(n-1,sum+n);
}
int main(){
printf("Enter n -> ");
    int n;
    scanf("%d",&n);
    sum1(n,0);
    return 0;
}