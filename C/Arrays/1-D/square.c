#include <stdio.h>
int main(){
 int size;
    printf("Enter the size of array ->");
    scanf("%d",&size);
int square[size];
for(int i=0;i<size;i++){
    square[i]=(i+1)*(i+1);
    printf("%d\n",square[i]);
}

return 0;
}