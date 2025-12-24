#include <stdio.h> 

int main() {
    short day = 2;
    switch(day) {
        case 2:
        case 22:
            printf("%d nd\n", day); 
            break;
        default:
            printf("%d th\n", day); 
            break;
    } 
    return 0;
}
