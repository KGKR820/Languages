#include <stdio.h>
int main(){
char *str="lol";
printf("%p\n",str);
printf("%s\n",str);
// here we cannot chenge the single individual character of a array space
str = "Star";
printf("%s\n",str);
// but we can change whole value of array space
char st[50] = "lol";
printf("%s\n",st);
st = "Star";  // we cannot change the whole value of array
// but we can change each(single individual) value of array
printf("%s\n",st);
    return 0;
}