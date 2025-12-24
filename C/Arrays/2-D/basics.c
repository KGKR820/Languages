#include <stdio.h>
int main(){
    int row;
    printf("Enter the number of rows -> ");
scanf("%d",&row);
int column;
    printf("Enter the number of columns -> ");
scanf("%d",&column);
int arr[row][column];
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        printf("a[%d][%d] -> ",i,j);
        scanf("%d",&arr[i][j]);
    }
}
printf("Matrix -> \n");
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
printf("Transpose of the matrix -> \n");
for(int i=0;i<column;i++){
    for(int j=0;j<row;j++){
        printf("%d ",arr[j][i]);
    }
    printf("\n");
}
    return 0;
}