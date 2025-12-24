#include <stdio.h>

int main() {
    int num1, num2, max, lcm = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find the maximum of the two numbers
    max = (num1 > num2) ? num1 : num2;

    // Start from the maximum and increment until a common multiple is found
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}