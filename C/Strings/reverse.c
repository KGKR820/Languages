#include <stdio.h>
int main(){
    int n;
char arr[100];
printf("Enter sentence -> ");
gets(arr);
// finding the exact size of sentence including \0
// hi guys\0
for(int i=0;i<100;i++){
    if(arr[i] == '\0'){
      n=i+1;
      break;
    }
}
// reverse the sentence without changing position of \0
// syug ih\0
for(int i=0,j=n-2;i<j;i++,j--){
  char temp = arr[i];
  arr[i] = arr[j];
  arr[j]= temp;
}
// reverse the words between spaces 
for(int i=0,m=0;i<n;i++){
 if(arr[i] == ' ' || i==n-1){
     for(int k = m,j=i-1;k<j;k++,j--){
  char temp = arr[k];
  arr[k] = arr[j];
  arr[j]= temp;

}
 if(arr[i] == ' ' || i==n-1){
   m=i+1;
    if(m==n) break;
 }
    }
 }
 // guys hi
 printf("Reversed sentence -> ");
puts(arr);
    return 0;
}