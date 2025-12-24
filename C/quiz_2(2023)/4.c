#include <stdio.h>

int main() {
    int a, b, c, largest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    switch ((a > b) + (a > c) * 2) {
        case 3:
            largest = a;
            break;
        case 2:
            largest = b;
            break;
        case 1:
            largest = c;
            break;
        case 0:
           largest = c;
           break;
        default:
            largest = a; // In case all are equal
            break;
    }

    printf("The largest number is: %d\n", largest);
    return 0;
}


