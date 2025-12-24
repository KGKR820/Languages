#include <stdio.h>
int subtract(int a,int b){
    return a-b;
}
int main(){
int a=12,b=3;
int result = subtract(a,b);
printf("%d",result);
    return 0;
}