#include <stdio.h>
int main (){
printf("Enter a number = ");
int x;
scanf("%d",&x);
int p = 1;
for(int i=1;i<=x;i++){
   
p=p*i;
}
printf("factorial = %d",p);
    return 0;
}
