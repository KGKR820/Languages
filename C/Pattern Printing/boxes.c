#include <stdio.h>
int main (){
int m,n;
printf("No of rows:");
scanf("%d",&m);
printf("No of columns:");
scanf("%d",&n);
for (int i=1;i<=m;i++){ // ROWS
for(int j=1;j<=n;j++){   //COLUMNS
    printf("* ");
}
printf("\n");
}
return 0;
}
//simple method