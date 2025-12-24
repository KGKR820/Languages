#include <stdio.h>
int main(){
  int a,b,c;
  printf("Enter three numbers=\n");
  scanf("\n%d\n%d\n%d",&a,&b,&c);
  if (a>b){
     if (a>c) printf("a is largest");
     else printf("c is largest");
  }  
  else {
    if (b>c) printf("b is largest");
    else printf("c is largest");
          
  }
  
return 0;  
}