#include <stdio.h>
int main() {
    int a, b, c;
    // Input side lengths
    scanf("%d %d %d", &a, &b, &c);
    // Check if the triangle is valid
    if (a + b <= c || b + c <= a || a + c <= b) {
        printf("Invalid triangle\n");
    } 
    else {
        // Check type of triangle
        if (a == b && b == c) {
            printf("Equilateral\n");
        } 
        else if (a == b || b == c || a == c) {
            printf("Isosceles\n");
        } 
        else {
            printf("Scalene\n");
        }
    }
    return 0;
}