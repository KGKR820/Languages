// divisible by 5 or 3 but not with 15
#include <stdio.h>
int main(){
int x;
printf("Enter a number -> ");
scanf("%d",&x);
if (x%15 != 0){
    if(x%5 != 0){
       if(x%3 != 0) printf("Not satisfied");
       else printf("satisfied");
    }
      else printf("satisfied");
}
else printf("Not satisfied");
    return 0;
}