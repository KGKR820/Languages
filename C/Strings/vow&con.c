#include <stdio.h>
#include <string.h>
int main(){
char str[200];
gets(str);
puts(str);
int n = strlen(str);
char vow[6] = "aeiou";
int count = 0;
for(int i=0;i<n;i++){
    for(int j=0;j<5;j++){
        if(str[i] == vow[j]){
            count ++;
        }
    }
}
printf("%d\n",count);
printf("%d",n-count);
    return 0;
}