#include <stdio.h>
int main(){
float x1,x2,y1,y2,distance;
  printf("enter x1 = ");
  scanf("%f",&x1);
  printf("enter x2 = ");
  scanf("%f",&x2);
  printf("enter y1 = ");
  scanf("%f",&y1);
  printf("enter y2 = ");
  scanf("%f",&y2);
  distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
  printf("distance between two points = %f",distance);
  return 0;
}