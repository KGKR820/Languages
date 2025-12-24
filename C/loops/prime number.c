#include <stdio.h>
int main (){
    int x;
printf("Enter a number = ");
scanf("%d",&x);
int y=1;
for(int i=2;i<x;i++){
if (x%i==0) y=0;
break;
} 
if (x==1) printf("neither prime nor composite");
else if (y==0) printf("composite number");
else printf("prime number");

    return 0;
}