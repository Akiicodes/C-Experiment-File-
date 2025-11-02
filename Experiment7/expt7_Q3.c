#include <stdio.h>

// Structure definition
struct Book {
    int book_id;
    char title[50];
    char author[50];
    float price;
};

// Function to display book details
void displayBook(struct Book b) {
    printf("\nBook Details:\n");
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main() {
    struct Book b1;

    // Reading book details
    printf("Enter Book ID: ");
    scanf("%d", &b1.book_id);
    getchar(); // to consume leftover newline character

    printf("Enter Book Title: ");
    fgets(b1.title, sizeof(b1.title), stdin);

    printf("Enter Author Name: ");
    fgets(b1.author, sizeof(b1.author), stdin);

    printf("Enter Price: ");
    scanf("%f", &b1.price);

    // Function call
    displayBook(b1);

    return 0;
}
