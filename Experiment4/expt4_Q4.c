#include <stdio.h>

void counterFunction() {
    static int count = 0;  // static local variable
    count++;
    printf("count = %d\n", count);
}

int main() {
    counterFunction();  // 1st call
    counterFunction();  // 2nd call
    counterFunction();  // 3rd call
    counterFunction();  // 4th call
    return 0;
}
