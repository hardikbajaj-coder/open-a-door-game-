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

//9; a year is a leap year or not;
int year ;
printf("enter the year : ");
scanf("%d",&year);
if (year%4==0)
if (year%100!=0)
 { printf("year is a leap year");}
  else
     if(year%400==0)
    { printf("year is a leap year");}
     
     else
     {printf("year is not a leap year");}

     else 
     {printf("year is not a leap year");}}
//10; table of a no.
int main() {
    int n, i;

                printf("Enter the value of N: ");
                    scanf("%d", &n);

                    
                            for (i = 1; i <=10; i++) 
                            
                                        

    printf(" %d * i = %d\n", n, n*i);

//11; perimeter and area of a plot
    int main() {
    int leanth , breadth;

                printf("Enter the value of leanth: ");
                    scanf("%d", &leanth);
                    printf("Enter the value of breadth: ");
                                        scanf("%d", &breadth);

                                            printf("The are of plot is %d\n", leanth*breadth);
                                            printf("perimeter of a rectangle is %d\n" , (2*(leanth + breadth)));
    12 ;
        #include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    // Corrected commas to semicolons, and removed the duplicate 'int'
    for (i = 1; i < 11; i++) { 
        // Corrected format string to calculate and print the actual product
        printf("%d * %d = %d\n", n, i, n * i);
    }
    
    return 0; 
}
13;
#include <stdio.h>

int main() {
    int n, remainder;
    int reverse = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;         
        reverse = reverse * 10 + remainder; 
        n = n / 10;               
    }

    printf("Reverse of the no. is %d\n", reverse);

    return 0;
}
14;
#include <stdio.h>

int main() {
    int num, remainder;
    int reverse = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    for (; num != 0; num = num / 10) {
        remainder = num % 10;              
        reverse = reverse * 10 + remainder; 
    }

    printf("Reverse of the no. is %d\n", reverse);

    return 0;
}
15;#include <stdio.h>

int main() {
    int n;
    int i = 1;         
    int product = 1;    

    printf("Enter an integer: ");
    scanf("%d", &n);
    while (i <= n) {
        product = product * i;
        i += 1; 
    }
    
    printf("Factorial of %d is %d\n", n, product);

    return 0;
}
16;
#include <stdio.h>
int main() {
int n;
int sum = 0;
int rem;
printf("enter the no ");
scanf("%d" , &n);
while(n!=0) {
    rem = n%10;
    sum = sum + rem;
    n = n/10;}
    printf("sum of the digits is %d" , sum);

return 0;}







