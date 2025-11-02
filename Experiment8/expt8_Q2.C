#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'A';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    // Original addresses
    printf("Original Addresses:\n");
    printf("p1 (int pointer): %p\n", p1);
    printf("p2 (float pointer): %p\n", p2);
    printf("p3 (char pointer): %p\n\n", p3);

    // Increment pointers
    p1++;
    p2++;
    p3++;

    printf("After Incrementing:\n");
    printf("p1 (int pointer): %p\n", p1);
    printf("p2 (float pointer): %p\n", p2);
    printf("p3 (char pointer): %p\n\n", p3);

    // Decrement pointers 
    p1--;
    p2--;
    p3--;

    printf("After Decrementing:\n");
    printf("p1 (int pointer): %p\n", p1);
    printf("p2 (float pointer): %p\n", p2);
    printf("p3 (char pointer): %p\n", p3);

    return 0;
}
