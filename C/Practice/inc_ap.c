#include <stdio.h>
int main(){
int n,l=0;
printf("number -> ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
   l=l+(2*i-1);
   printf("%d ",l);
}
    return 0;
}