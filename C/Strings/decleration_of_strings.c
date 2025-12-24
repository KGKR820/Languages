#include <stdio.h>
int main (){
char arr[] = "Kondai"; // "Kondai" -> {'K'........'i',\0} \0 is null character(ascii value = 0)
int n = sizeof(arr)/sizeof(arr[0]);
//arr[i]='\0'
for(int i=0;i<n;i++){
    printf("%c",arr[i]);  
}
printf("\n%d",n);
printf("\n%s",arr);
char ar[] = "Konda\0i"; // after \0 it will not printed in %s 
printf("\n%s",ar);
    return 0;
} 