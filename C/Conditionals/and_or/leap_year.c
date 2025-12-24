#include <stdio.h>
int main (){
printf("Enter a year = ");
  int x;
  scanf("%d",&x);
  // to write two conditions at a time to work keep them in brachhett
  if (x%400==0 || (x%4==0 && x%100!=0))
    printf("Entered year is leap year");
  else
    printf("Entered year is not leap year");
return 0;
}