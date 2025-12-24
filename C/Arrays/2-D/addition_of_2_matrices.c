#include <stdio.h>
int main (){
    int r1,c1;
    printf("r1,c1 ->");
    scanf("\n%d\n%d",&r1,&c1);
int arr1[r1][c1],arr2[r1][c1];
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        printf("a[%d][%d] ->",i,j);
    scanf("%d",&arr1[i][j]);
    }
}
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        printf("b[%d][%d] ->",i,j);
    scanf("%d",&arr2[i][j]);
    }
}
printf("Matrix A -> \n");
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        printf("%d ",arr1[i][j]);
    }
    printf("\n");
}
printf("Matrix B -> \n");
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        printf("%d ",arr2[i][j]);
    }
    printf("\n");
}
printf("Matrix A + Matrix B\n");
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        printf("%d ",arr1[i][j]+arr2[i][j]);
    }
    printf("\n");
}
    return 0;
}