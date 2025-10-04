#include <stdio.h>

int main() {
    int x = 10; 
    printf("In main block: x = %d\n", x);

    {   
        int y = 20; 
        printf("In inner block 1: x = %d, y = %d\n", x, y);
    }
    

    {   
        int z = 30;
        printf("In inner block 2: x = %d, z = %d\n", x, z);
    }
   
    printf("Back in main block: x = %d\n", x);

    return 0;
}
