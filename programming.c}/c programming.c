#include <stdio.h>
#include <math.h>

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
//4 ;sum of n numbers
int n, sum = 0, count = 1;
printf("Enter the value of n: ");
scanf("%d", &n); 
while (count <= n) {
    sum = count + sum;
    count++;
}
printf("The sum of first %d numbers is: %d\n", n, sum);

//5; area of square
float side;
printf("Enter the side of the square: ");
scanf("%f", &side);
printf("The area of the square is: %f\n", side * side);

//6; area of circle
float radius, pie = 3.14;
printf("enter the radius of the circle: ");
scanf("%f", &radius);
float area = pie * radius * radius;
printf("area of circle is: %f\n", area);

//7; area of rectangle;
float length, breadth;
printf("Enter the length and breadth of the rectangle: ");
scanf("%f %f", &length, &breadth);
printf("The area of the rectangle is: %f\n", length * breadth);
//8; 
float result = pow(6.0, 2.0);
printf("The result of 6 raised to the power of 2 is: %f\n", result);
    return 0;
}




