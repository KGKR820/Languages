#include <stdio.h>
    int fact(int x){
        int p=1;
for (int i=1;i<=x;i++){
    p = p*i;
}
return p;
    }
    int comb(int n, int r){
        return fact(n)/(fact(r)*fact(n-r));
    }
int main(){
int c;
printf("Enter number -> ");
scanf("%d",&c);
for(int i =0;i<=c;i++){
  for(int j=0;j<=c;j++){
    if(i+j>=c){
    printf("%d ",comb(i,j-c+i));}
    else printf(" ");
  }
printf("\n");
}
    return 0;
} /// correctly works upto 5 rows(c=4)