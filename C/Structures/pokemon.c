#include <stdio.h>
int main(){
typedef struct pokemon{ // bt writing typedef and dat type name at the ending we can easily create variables
   int hp;
   float attack;
   char name[20];
}pokemon;
pokemon p1 = {67,92.82,"bulbasaur"}; // we can directly input all values in order
pokemon p2 = {52,101.8,"charmander"};
pokemon p3 = {62,96.89,"squirtle"};
printf("%s:\n",p1.name);
printf("attack -> %f\n",p1.attack);
printf("hp -> %d\n",p1.hp);
printf("\n");
printf("%s:\n",p2.name);
printf("attack -> %f\n",p2.attack);
printf("hp -> %d\n",p2.hp);
printf("\n");
printf("%s:\n",p3.name);
printf("attack -> %f\n",p3.attack);
printf("hp -> %d\n",p3.hp);
printf("\n");
    return 0;
}