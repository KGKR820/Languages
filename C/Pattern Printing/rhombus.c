#include <stdio.h>
int main (){
int x;
printf("Number -> ");
scanf("%d",&x);
    for(int i=1;i<=2*x-1;i++){
        for(int j=1;j<=2*x-1;j++){
            if(i<=x){
         if(j>=x+1-i && j<=x+i-1) printf("* ");
         else printf("  ");
            }
            if(i>x && i<=2*x-1){
         if(j>=i-x+1  && j<=2*x-1-(i-x)) printf("* ");
         else printf("  ");
            }
        }
        printf("\n");
    }
 
    return 0;
}