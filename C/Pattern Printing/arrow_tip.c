#include <stdio.h>
int main (){
int x;
printf("Number -> ");
scanf("%d",&x);
    for(int i=1;i<=2*x-1;i++){
        for(int j=1;j<=x;j++){
            if(i<=x){
         if(j<=i) printf("* ");
         else printf("  ");
            }
            if(i>x){
         if(j<=2*x-i) printf("* ");
         else printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}