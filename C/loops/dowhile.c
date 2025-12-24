#include <stdio.h>
int main (){
int n;
printf("number -> ");
scanf("%d",&n);
 int i=1;
do{
printf("%d ",i);
i++;
}
while(i<=n);
    return 0;
}