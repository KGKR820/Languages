#include <stdio.h>
int main (){
float a;
  printf("Enter a number = ");
  scanf("%f",&a);
  if (a>0) printf("Entered number is positive");
  if (a==0) printf("Entered number is zero");
  if (a<0) printf("Entered number is negative");
  return 0;
}
