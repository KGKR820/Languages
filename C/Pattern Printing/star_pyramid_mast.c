#include <stdio.h>
int main (){
int x;
printf("Number -> ");
scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=2*x-1;j++){
            if(i>1){
         if(j>=x+2-i && j<=x+i-2) printf("  ");
         else printf("* ");
            }
            else printf("* ");
        }
        printf("\n");
    }
    return 0;
}