#include <stdio.h>
int main(){
char str[50];
scanf("%s",str); // no need of &
               // if str = hi guys
printf("%s",str);
// output = hi (because after space scanf thinks that it as another input which has no space)
    return 0;
}