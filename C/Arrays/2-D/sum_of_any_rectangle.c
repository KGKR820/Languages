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
int i1,j1,i2,j2;
printf("Enter the coordinates -> \n");
printf("1 -> ");
scanf("%d %d",&i1,&j1);
printf("2 -> ");
scanf("%d %d",&i2,&j2);
int row,column,lol,lul;
if(i1<=i2) row=i1,lol=i2;
else row=i2,lol=i1;
if(j1<=j2) column=j2,lul=j1;
else column=j1,lul=j2;
int sum = 0;

for(int i=row;i<=lol;i++){
    for(int j=lul;j<=column;j++){
       sum = sum + arr[i][j];
    }
}
printf("%d",sum);
    return 0;
}