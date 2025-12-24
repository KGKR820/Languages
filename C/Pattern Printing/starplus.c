#include <stdio.h>
int main (){
int x;
printf("Number -> ");
scanf("%d",&x);
if(x%2!=0){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            if(j == (x/2)+1 || i == (x/2)+1) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
}
else printf("Star is not possible");
    return 0;
}