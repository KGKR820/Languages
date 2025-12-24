#include <stdio.h>
int main(){
printf("Enter a number = ");
int x;
scanf("%d",&x);
int count = 0;
while(x>0){
    x=x/10;
    count++;
}
printf("No of digits in the number = %d",count);
    return 0;
}