#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct item{
    char name[100];
    float price;
    int quantity;
}item;
void add(item *ptr,int n){
    for(int i=0;i<n;i++){
        printf("Name : ");
        scanf("%s ",(ptr+i) -> name);
        printf("price : ");
        scanf("%f ",&(ptr + i) -> price);
        printf(" Quantity : ");
        scanf("%d ",&(ptr + i) -> quantity);
    }
}
void display(item *ptr,int n){
    for(int i=0;i<n;i++){
        printf("%s ",(ptr + i) -> name);
        printf("price : %f",(ptr+i) -> price);
        printf("Quantity : %d",(ptr+i) -> quantity);
    }
}
void update(item *ptr,int n){
    for(int i=0;i<n;i++){
        printf("Name : ");
        scanf("%s ",(ptr+i) -> name);
        printf(" new Quantity : ");
        scanf("%d ",&(ptr + i) -> quantity);
    }
}
void display2(item *ptr,int n){
    for(int i=0;i<n;i++){
        printf("%s ",(ptr + i) -> name);
        printf("new quantity : %d",(ptr+i) -> quantity);
    }
}
int main(){
    int n;
    scanf("%d",&n);
item s[n];
item *ptr = &s[0];
add(ptr,n);
    return 0;
}
