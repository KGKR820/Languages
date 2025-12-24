#include <stdio.h>
int main (){
float x;
  float y;
  float z;
  printf("Enter the 1st side of triangle = ");
  scanf("%f",&x);
  printf("Enter the 2nd side of triangle = ");
  scanf("%f",&y);
  printf("Enter the 3rd side of triangle = ");
  scanf("%f",&z);
  // ther should not be semicolon after if statement
  if (x+y>z && y+z>x && x+z>y)
    printf("Traingle is valid");
   else 
  printf("Triangle is not valid");
    return 0;
}