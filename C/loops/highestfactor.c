#include <stdio.h>
int main (){
int n;
  int hf=1;
  printf("Enter the value of n = ");
  scanf("%d",&n);
  for (int i=1;i<=n-1;i++){
    if (n%i==0) hf=i;
   
  }
   printf("highest factor = %d",hf);
  return 0;
}