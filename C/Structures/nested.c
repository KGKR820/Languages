#include <stdio.h>
#include <string.h>
int main(){
typedef struct pokemon{ 
   int hp;
   float attack;
   char name[20];
}pokemon;
         
typedef struct legendary{
    pokemon p2;
    char region[90];
}legendary;
  
         legendary p3;
  strcpy(p3.region,"jhoto");
     strcpy(p3.p2.name,"celebi");
      p3.p2.hp = 130;
      p3.p2.attack = 92;
printf("%s ",p3.region);

legendary p4 = {{180,119,"mewtwo"},"kanto"};
printf("%s ",p4.region);
return 0;
}
