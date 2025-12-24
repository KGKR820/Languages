// divisible by 5 or 3 but not with 15
#include <stdio.h>
int main (){
int x;
  printf ("Enter a number = ");
  scanf ("%d",&x);
  if (x%15!=0) // 7 linked to 16
  { 
    if (x%5!=0) // 9 linked to 14
    {
      if (x%3==0) printf ("satisfied"); //11 linked to 13
      else printf ("not satisfied");
    }
    else printf ("satisfied");
  }
  else  printf ("not satisfied");
  return 0;
}
