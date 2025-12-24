#include <stdio.h>
int main(){
int a;
printf("n(n*n) -> ");
scanf("%d",&a);
int arr[a][a];
for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        printf("a[%d][%d] -> ",i,j);
      scanf("%d",&arr[i][j]);
    }
}
// transpose
printf("transpose matrix ->\n");
for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        printf("%d ",arr[j][i]);
    }
    printf("\n");
}
// reverse the row
printf("90 degree rotated matrix ->\n");
for(int i=0;i<a;i++){
    int j=0;
    int k = a-1;
    while(j<k){
        int temp = arr[i][j];
        arr[i][j]=arr[i][k];
        arr[i][k]=temp;
        j++;
        k--;
    }
}
for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
return 0;
}