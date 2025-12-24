#include <stdio.h>
int main(){
char str[50]="Kondai";
char *ptr = str;
printf("%s\n",str);
printf("%s\n",ptr);
str[0] = 'k'; // if str is changed ptr is also changed
printf("%s\n",str);
printf("%s\n",ptr);
return 0;
}