#include <stdio.h>
int main(){
int x;
  printf("Enter a number = ");
  scanf("%d",&x);
  if(x>0)  printf("Entered number is postive");
  else printf("Entered number is negative");
  if(x%2 == 0) printf("\nEntered number is even");
  else printf("\nEntered number is odd");
  return 0;
}