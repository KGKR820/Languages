#include <stdio.h>
#include <string.h>
int main(){
char str[100];
fgets(str,100,stdin); 
// pattern : fgets(string,size of string,location of the file in ehich string is present);
puts(str);
    return 0;
}