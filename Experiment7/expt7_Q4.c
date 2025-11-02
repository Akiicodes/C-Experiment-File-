#include <stdio.h>

// Union definition
union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[30];
    char state[30];
    char zip[10];
};

int main() {
    union Address addr;

    printf("Enter your present (hostel) address: ");
    fgets(addr.hostel_address, sizeof(addr.hostel_address), stdin);

    printf("\nYour present address is: %s", addr.hostel_address);

    return 0;
}
