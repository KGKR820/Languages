#include <stdio.h>
int main (){
int a[4]={25,55};
printf("%d %d",a[0]&a[1],a[1]|a[2]);
/*
25 = 1 1 0 0 1   =
55 = 1 1 0 1 1 1 =

25 & 55 = 0 1 0 0 0 1
25 | 55 = 1 1 1 1 1 1
55 | g.v = 55
55 & g.v = 0

*/
return 0;
}