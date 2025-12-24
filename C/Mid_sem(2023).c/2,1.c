#include <stdio.h>
int main(){
int x;
printf("Enter a number ->");
   scanf("%d",&x);
   switch(x%400){
    case 0 : printf("Leap year");
    break;
    default : switch(x%4)
        {
    case 0 : switch(x%100)
    {
        case 0 : printf("not leap year");
        break;
        default : printf("Leap year");
    }
    break;
    default : printf("not leap year");
   }
   }
   
    return 0;
}