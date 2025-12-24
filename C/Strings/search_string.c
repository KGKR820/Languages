#include <stdio.h>
int main(){
    int n;
char arr[100];
printf("Enter sentence ->");
gets(arr);
for(int i=0;i<100;i++){
    int a = arr[i];
  if(a == 0) {
     n = i+1;
    break;
  }
}
char l;
printf("Enter the letter -> ");
scanf("%c",&l);
printf("index of %c in sentence -> ",l);
for(int i=0;i<n;i++){
  if(arr[i] == l) printf("%d ",i);
}
    return 0;
}