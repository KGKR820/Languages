#include <stdio.h>
int main(){
printf("Enter a number = ");
int x;
scanf("%d",&x);
int product = 1;
while(x>0){
    int ld = x%10;
    x=x/10;
    product = product*ld;
}
printf("sum of digits in the number = %d",product);
    return 0;
}