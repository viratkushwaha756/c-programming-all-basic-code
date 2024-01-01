
#include<stdio.h>
int main() {
    int a, b, c;

    printf("Enter the lengths of three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("These sides form a triangle.\n");

        if (a == b && b == c) {
            printf("This is an equilateral triangle.\n");
        } else if (a == b || b == c || c == a) {
            printf("This is an isosceles triangle.\n");
        } else if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b) {
            printf("This is a right-angled triangle.\n");
        } else {
            printf("This is a scalene triangle.\n");
        }

    } else {
        printf("These sides do not form a triangle.\n");
    }

    return 0;
}
