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
  for(int j=0;j<=i;j++){
    printf("%d ",comb(i,j));
  }
printf("\n");
}
    return 0;
}