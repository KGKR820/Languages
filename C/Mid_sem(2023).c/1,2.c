#include <stdio.h>
int main(){
    int count =0,reverse=0;
for(int i=100;i<10000;i++){
    int org = i;
    while(org>0){
  int ld=org%10;
    reverse = reverse*10;
    reverse = reverse + ld;
    org=org/10;
    }
    if(reverse == i){
        printf("%d is a palindrome\n",i);
        count++;
    }
    reverse =0;
}
printf("total no of palindromes -> %d",count);
    return 0;
}