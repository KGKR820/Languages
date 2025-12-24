#include <stdio.h>
int main(){
int n,sum=0;
printf("number -> ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    sum = sum + i*i;
}
printf("sum of squares -> %d",sum);
    return 0;
}