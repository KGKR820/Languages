#include <stdio.h>
int main(void){
  float x ;
 printf("enter a number = ");   // scanf for taking input 
  scanf("%f",&x);   // & = ampercent
  printf("square of the number = ");
  printf("%f",x*x);
  printf("\ncube of the number = %f",x*x*x);
  // \n for going to next line 
  // then text for printing
  // %f for calculating the output
  return 0;
}