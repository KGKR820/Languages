#include <stdio.h>
int main(){
  float x;  // x=3.120000
  printf("Enter a number = ");
  scanf("%f",&x);
  // typecasting to int box
  int a = (int)x;  // a=3
  //typecasting to float box
  float b = (float)a; //b=3.000000
  
  if(x-b == 0) //similar boxes should be operated
    printf("Entered number is integer");

  if(x-b > 0) 
    printf("Entered number is not an integer");
  
  return 0;
}