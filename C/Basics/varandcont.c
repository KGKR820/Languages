#include <stdio.h>
int main(void){
int x = 5;
  printf("%d\n",x);
  printf("%d\n",x+1);
  x = x + 1;
  printf("%d\n",x);     //int for integers
  int y = x+10;         //%d for integers
  printf("%d\n",x+y);
  return 0;
}
