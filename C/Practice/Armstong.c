#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n); // User inputs the limit up to which Armstrong numbers will be checked

    for (int i = 1; i <= n; i++) { // Loop through each number from 1 to n
        int l = i; // Store the current number
        int m = i; // Store the original number for comparison later
        int count = 0;

        // Count the number of digits in the current number
        while (i > 0) {
            i = i / 10; // Reduce the number by a factor of 10
            count++; // Increment the digit count
        }

        int sum = 0;

        // Reset i to the original number for the next loop
        i = l; 

        // Calculate the sum of the digits raised to the power of count
        while (l > 0) {
            int ld = l % 10; // Get the last digit
            sum = sum + pow(ld, count); // Add the powered digit to sum
            l = l / 10; // Remove the last digit
        }

        // Check if the sum equals the original number
        if (m == sum) 
            printf("%d is an Armstrong number\n", m); // Print if it is an Armstrong number
    }
    return 0; // End of the program
}
