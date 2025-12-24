#include <stdio.h>
int main (){
int a,b,c,d,e;
  printf("Enter the marks of 5 subjects ->\n ");
  scanf("%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e);
  int x=a+b+c+d+e;
   printf("total marks of 5 subjects ->%d\n",x);
  float y = x/5.0;
   printf("percentage ->%f percent\n",y);
  if (y>=90) printf("A grade");
   if (y<90 && y>75) printf("B grade");
  return 0;
}  