// QUES: Write a program to write absolute value of a integer
#include <stdio.h>
int main(){
int x;
  printf("Enter a number = ");
  scanf("%d",&x);
  if(x>0) { 
     printf("Entered number is postive");
    printf("\nabsolute value is %d",x);
  } //if there are more than more statements to wrie you can write them in {} to work for if operator
    
  if(x==0) 
    printf("Entered number is zero");
  
  if(x<0)
    printf("Entered number is negative \nabsolute value is %d",x*-1);
  
  return 0;
}

  