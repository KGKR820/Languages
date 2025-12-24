#include <stdio.h>
int main(){
printf("Enter a number = ");
int x;
scanf("%d",&x);
int r = 0;
while(x>0){
    int ld = x%10;
    x=x/10;
    r=r*10;
    r=r+ld;
}
printf("reverse of the number = %d",r);
    return 0;
}