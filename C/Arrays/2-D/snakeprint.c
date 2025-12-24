#include <stdio.h>
int main(){
int a,b;
printf("Enter the no.of rows and columns -> ");
scanf("%d %d",&a,&b);
int arr[a][b];
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        printf("a[%d][%d] -> ",i,j);
      scanf("%d",&arr[i][j]);
    }
}
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
      if(i%2==0){
       printf("%d ",arr[i][j]);
      }
     else{
       printf("%d ",arr[i][b-j-1]);
      }
}
}
return 0;
}