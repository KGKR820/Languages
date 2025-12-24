#include <stdio.h>
int main (){
int x;
printf("Number -> ");
scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
          if(i+j>=x+1) printf("%c ",i+j+64-x);
          else printf("  "); 
        }
        printf("\n");
    }
    return 0;
}