#include <stdio.h>
int main(){
printf("Enter a number = ");
int x;
scanf("%d",&x);
int sum = 0;
while(x>0){
    int ld = x%10;
    x=x/10;
    sum = sum+ld;
}
printf("sum of digits in the number = %d",sum);
    return 0;
}