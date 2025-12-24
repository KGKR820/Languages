// ques:take integer as input and print half of the number
#include <stdio.h>
int main(void){
int x;  //only integer is taken as input
  printf("enter a number = ");
  scanf("%d",&x);
  // type casting
  float y = (float)x; //x is moved to float box
  printf("half of that number = %f",y/2);  //now output can be in decimals
  return 0;
}