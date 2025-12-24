#include <stdio.h>
int a=7; // here a is declared 7 globally (it can be used anywhere in the code)
 void lol(){
    a=2; // here a function is created globally to chanege value of a to 2
}
int main (){ 
printf("%d",a); // a=7  
lol(); // a=2   
printf("\n%d",a);
int a = 70; // local a = 70
printf("\n%d",a); // preference local > global in main function
// a=70
lol(); // global a=2  
// local a=70
printf("\n%d",a); // local is prefred
    return 0;
}