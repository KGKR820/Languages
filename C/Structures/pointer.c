#include <stdio.h>
int main(){
typedef struct book{
    char name[90];
    float cost;
}book;
 book lol = {"laugh out loud",92.76};
 book *ptr = &lol;
 // In structures pointers are defrenced using ( -> ) 
 printf("Name -> %s \n",ptr -> name);
  printf("cost -> %f ",ptr -> cost);
    return 0;
}