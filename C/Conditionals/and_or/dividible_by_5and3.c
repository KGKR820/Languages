 #include <stdio.h>
int main(){
int x;
  printf("Enter a number = ");
  scanf("%d",&x);
  //&& is equal to logical and
  // if first statement is false then it will not check the second statement
  if(x%5 == 0 && x%3 == 0)
    printf("entered number is divisible by 5 and 3");
      else
    printf("entered number is divisible not by 5 and 3");//
  return 0;
}