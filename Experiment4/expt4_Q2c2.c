#include <stdio.h>

// Global variable
int globalVar = 50;

void functionOne() {
    printf("Inside functionOne: globalVar = %d\n", globalVar);
    globalVar += 10; // modify global variable
}

int main() {
    printf("In main before functionOne: globalVar = %d\n", globalVar);
    functionOne();
    printf("In main after functionOne: globalVar = %d\n", globalVar);
    return 0;
}
