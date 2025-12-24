#include <stdio.h>
int main (){
int a,b;
char ch;
printf("Enter opertor : ");
scanf("%c",&ch);
printf("Enter first number : ");
scanf("%d",&a);
printf("Enter second number : ");
scanf("%d",&b);
switch(ch){
    case '-': printf("%d",a-b); // case is similar to if
    break; // if break is not kept it will do all actions
    case '+': printf("%d",a+b);
    break;
    case '*': printf("%d",a*b);
    break;
    case '/': printf("%d",a/b);
    break;
    default: // default is similar else
    printf("Operator unavailable");
}
    return 0;
}