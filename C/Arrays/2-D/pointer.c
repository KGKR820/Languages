#include <stdio.h>
int main(){
int row;
int column;
printf("row -> ");
scanf("%d",&row);
printf("column -> ");
scanf("%d",&column);
int arr[row][column];
// every 2d array is like a 1d array with each elment holding a 1d array
int (*ptr)[column] = arr; /*  (*ptr)[column] denotes a pointer variable ptr  which points to 0 th 
 1d array of collection of 1d arrays(2d array)  */ 
for(int i=0;i<row;i++){
   for(int j=0;j<column;j++){
    printf("arr[%d][%d] -> ",i,j);
    scanf("%d ",&(*(*(ptr+i)+j))); /* ptr+i changes the 1d array number and j changes the each number 
    in the 1d array */
   }
}
for(int i=0;i<row;i++){
   for(int j=0;j<column;j++){
    printf("%d ",*(*(ptr+i)+j));
   }
   printf("\n");
}
    return 0;
}