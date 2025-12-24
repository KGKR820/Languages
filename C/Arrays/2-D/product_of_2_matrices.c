#include <stdio.h>
int main (){
    int r1,c1,r2,c2;
    printf("r1,c1 ->\n");
    scanf("\n%d\n%d",&r1,&c1);
    printf("r2,c2 ->\n");
    scanf("\n%d\n%d",&r2,&c2);
    if (r2==c1){
int arr1[r1][c1],arr2[r1][c1];
printf("Enter the elements of matrix a -> \n");
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        printf("a[%d][%d] ->",i,j);
    scanf("%d",&arr1[i][j]);
    }
}
printf("Enter the elements of matrix b -> \n");
for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
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
for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
        printf("%d ",arr2[i][j]);
    }
    printf("\n");
}
int p[r1][c2];
for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        p[i][j]=0;
        for(int k=0;k<c1;k++){
            p[i][j]=p[i][j]+arr1[i][k]*arr2[k][j];
        }
    }
}
printf("Product of matrix A and matrix B -> \n");
for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        printf("%d ",p[i][j]);
    }
    printf("\n");
}
    }
    else printf("Multiplication is not possible");
return 0;
}