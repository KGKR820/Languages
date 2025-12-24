#include <stdio.h>
void print(int n){
    if(n==0) return ;
    else{
    printf("%d ",n);
    print(n-1);
    }
}
int main(){
    printf("Enter n -> ");
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}