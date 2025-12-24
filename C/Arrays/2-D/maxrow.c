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
int sum =0 ,max = 0;
for(int i=0;i<a;i++){
    sum = 0;
    for(int j=0;j<b;j++){
       sum = sum + arr[i][j]; 
    if(sum>=max) max=sum;
    }
}
printf("max of sum a row -> %d\n",max);
for(int i=0;i<a;i++){
     sum = 0;
    for(int j=0;j<b;j++){
       sum = sum + arr[i][j];
        if(sum>=max) printf("Row of max sum -> %d",i+1);
    }
   
}
return 0;
}