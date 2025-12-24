#include <stdio.h>
void print(int n){
    if(n==0) return ;
    else{
         print(n-1);
    printf("%d ",n);
    }
}
int main(){
    printf("Enter n -> ");
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}
// here 1st void fn is called 
// then it goes again back by changing n value without printing 
// when becomes 0 it stops and starts returning back
// while returning back it completes all the printf tasks in reverse order