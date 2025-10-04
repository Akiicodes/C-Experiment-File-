#include <stdio.h>

// Global variable (declared outside all functions)
int globalVar = 10;

// Function 1
void functionOne() {
    printf("Inside functionOne: globalVar = %d\n", globalVar);
    globalVar += 5; // modify global variable
}

// Function 2
void functionTwo() {
    printf("Inside functionTwo: globalVar = %d\n", globalVar);
    globalVar *= 2; // modify global variable
}

int main() {
    printf("Initially in main: globalVar = %d\n", globalVar);

    functionOne();  // uses and modifies globalVar
    printf("After functionOne in main: globalVar = %d\n", globalVar);

    functionTwo();  // uses and modifies globalVar
    printf("After functionTwo in main: globalVar = %d\n", globalVar);

    return 0;
}
 