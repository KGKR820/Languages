#include <stdio.h>
int main(){
int m;
printf("Number = ");
scanf("%d",&m);
for(int i=1;i<=m;i++){
for(int j=1;j<=m;j++){
    printf("%c ",j+64 ); // for triangle patterned alphabets just change j<=i
}                        // ascii value of A = 65
printf("\n");
}
return 0;
}
    