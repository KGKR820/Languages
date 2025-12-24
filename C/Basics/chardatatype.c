#include <stdio.h>      //ascii value:
int main() {               // a=97.......z=122
  char ch = 'A';          // A=65.......Z=90
  printf("%c", ch);       //0=48.......9=57
  printf("\n%d", ch);
  //typecasting(explicit)
  int ascii=(int)ch;
  printf("\n%d",ascii);
  //character data type operator is used for printing character
  //by using above two method we can find the ascii value of any character
int x=65;
  printf("\n%c",x);  //imlplicit typecasting
  //above method is printing character from ascii value


  //in '' there should be only one character
  //'a'=correct    'ab'=wrong
     return 0;
    }

