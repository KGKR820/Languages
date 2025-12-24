#include <stdio.h>
#include <stdlib.h>
int main(){
typedef struct node{
    int data;
    struct node *next;
}node;
node *one;
node *two;
node *three;
 
 one = malloc(sizeof(struct node));
  two = malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));

one -> data = 1;
two -> data = 2;
three -> data = 3;

one -> next = two;
two -> next = three;
three -> next = NULL;

node *p = one;
while(p != NULL){
 printf("%d\n",p -> data);
 p = p->next;
}
    return 0;
}