#include <stdio.h>
#include <math.h>
void root(int a,int b,int c){
   int r1 = ((-1)*b + sqrt(pow(b,2) - 4*a*c))/2*a;
   int r2 = ((-1)*b - sqrt(pow(b,2) - 4*a*c))/2*a;
   printf("root 1 -> %d\n",r1);
   printf("root 2 -> %d",r2);
}
int main(){
printf("Enter the coeff of x^2,x,constant -> "); 
int a,b,c;
scanf("%d\n%d\n%d",&a,&b,&c);
root(a,b,c);
    return 0;
}