#include <stdio.h>

int main(void) {
    int a, b, c;

    // 1. Even or odd
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("a is even\n");
    } else {
        printf("a is odd\n");
    }

    // 2. Positive or negative
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a > 0) {
        printf("a is positive\n");
    } else if (a < 0) {
        printf("a is negative\n");
    } else {
        printf("a is zero\n");
    }

    // 3. Largest of three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) {
        printf("a is largest\n");
    } else if (b >= a && b >= c) {
        printf("b is largest\n");
    } else {
        printf("c is largest\n");
    }

    return 0;
}



