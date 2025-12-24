#include <stdio.h>
int main(){
struct book{ // created a structure which consists of int page and float price
    int page;
    float price;
}secret,lol; // easy way to define variables
    secret.page = 92;
     secret.price = 34.92;
       lol.page = 192;
        lol.price = 95;
struct book hi; // here i have declared a variable named hi of data structure book
    hi.page=89;
    hi.price=165;
printf("%d\n",secret.page);
printf("%d\n",hi.page);
printf("%d\n",lol.page);
printf("%f\n",secret.price);
printf("%f\n",lol.price);
printf("%f\n",hi.price);
    return 0;
}