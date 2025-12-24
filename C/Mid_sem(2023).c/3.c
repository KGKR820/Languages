#include <stdio.h>
int main(){
    int x,b=1,sum=0;
    printf("Enter a number ->");
   scanf("%d",&x);
   while(x>0){
    int ld = x%10;
    sum = sum +ld*10*b;
    b = b*100;
    x=x/10;
   }
printf("%d",sum);
}
