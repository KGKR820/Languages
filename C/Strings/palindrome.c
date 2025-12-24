#include <stdio.h>
#include <string.h>
int main(){
char arr[100];
gets(arr);
int x = strlen(arr);
int y;
for(int i=0;i<x;i++){
   if(arr[i] == arr[x-i-1]) y=1;
   else {
    y=0;
   break;
   }
}
if(y==1) printf("Palindrome");
else printf("NOt palindrome");
}