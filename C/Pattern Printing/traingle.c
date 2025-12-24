#include <stdio.h>
int main(){
int m;
printf("Number = ");
scanf("%d",&m);
for(int i=1;i<=m;i++){
for(int j=1;j<=i;j++){
    printf("*");
}
printf("\n");
}
return 0;
}
    