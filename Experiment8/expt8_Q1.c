#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'A';

    int *ptr1 = &a;      // pointer to int
    float *ptr2 = &b;    // pointer to float
    char *ptr3 = &c;     // pointer to char

    // Printing addresses 
    printf("Address of a: %p\n", ptr1);
    printf("Address of b: %p\n", ptr2);
    printf("Address of c: %p\n\n", ptr3);

    // Printing values using pointers
    printf("Value of a (using pointer): %d\n", *ptr1);
    printf("Value of b (using pointer): %.2f\n", *ptr2);
    printf("Value of c (using pointer): %c\n", *ptr3);

    return 0;
}
