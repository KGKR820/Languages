#include <stdio.h>

int main() {
    int dayCount;

    printf("Enter a day count between 1 and 365: ");
    scanf("%d", &dayCount);

    switch (dayCount) {
        case 1 ... 31:
            printf("January\n");
            break;
        case 32 ... 59:
            printf("February\n");
            break;
        case 60 ... 90:
            printf("March\n");
            break;
        case 91 ... 120:
            printf("April\n");
            break;
        case 121 ... 151:
            printf("May\n");
            break;
        case 152 ... 181:
            printf("June\n");
            break;
        case 182 ... 212:
            printf("July\n");
            break;
        case 213 ... 243:
            printf("August\n");
            break;
        case 244 ... 273:
            printf("September\n");
            break;
        case 274 ... 304:
            printf("October\n");
            break;
        case 305 ... 334:
            printf("November\n");
            break;
        case 335 ... 365:
            printf("December\n");
            break;
        default:
            printf("Invalid day count!\n");
    }

    return 0;
}
