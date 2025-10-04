#include <stdio.h>

void functionOne() {
    int localVar = 20; // Local variable
    printf("Inside functionOne: localVar = %d\n", localVar);
}

int main() {
    functionOne();
    // printf("In main: localVar = %d\n", localVar); // Error: localVar is not accessible here
    return 0;
}
