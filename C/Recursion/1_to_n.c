#include <stdio.h>
void print(int k,int n){
    if(k==n+1) return ;
    else{
    printf("%d ",k);
    print(k+1,n);
    }
}
int main(){
    printf("Enter n -> ");
    int n;
    scanf("%d",&n);
    int k=1;
    print(k,n);
    return 0;
}