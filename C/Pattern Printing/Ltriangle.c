#include <stdio.h>
int main(){
int m;
printf("Number = ");
scanf("%d",&m);
for(int i=1;i<=m;i++){
for(int j=m;j>=i;j--){ //or j=1;j<=n+1-i
    printf("*");
}
printf("\n");
}
return 0;
}
    