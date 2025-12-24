// a%b = remainder whwn a is divided by b
// %(modulus operator) not applicable for float(decimals) only for integers
// a%b = a-(a/b)*b  a,b can be postive and negative integers
#include <stdio.h>
int main(){
int a=45;
  int b=23;
  int c= a%b;
  printf("%d",c);
  return 0;
}