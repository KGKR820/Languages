#include <stdio.h>
void num(int a,int sum){
    if(a%10 == 0){
        printf("%d",sum);
        return;
    }
    sum = sum + a%10;
    num(a/10,sum);
}
int main(){
num(2,0);
    return 0;
}