#include <stdio.h>
int main(){
int x;
  printf("Enter a number = ");
  scanf("%d",&x);
  if(x>0)  printf("Entered number is postive");
  if(x%2 == 0) printf("\nEntered number is even");
  if(x%2 != 0) printf("\nEntered number is odd");
  if(x<0)  printf("\nEntered number is negative");
  // pattern:if(condition) work
  //   condition saisfies then work shall be done
  //   condition doesn't saisfy then work shall not be done

  // RELATIONARY OPERATORS:
  //<(less than),>(greater than),<=(less than or equal to),>=(greater than or equal to),==(equal to),!=(not equal to)
  // =(assignment operator)
  return 0;
}