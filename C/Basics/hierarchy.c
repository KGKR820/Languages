#include <stdio.h>
int main(void){
// computor also follows bodmas rule
  //bracket > div,mult > add,sub
  //but at same precedence level computer solves from left to right
  // ex: 2*3/4 = from l to r 1(1.5) = 1
                 // from r to l 2*0(0.75) = 0
  int x = 2*3/4;
  printf("%d",x);
  return 0;
}