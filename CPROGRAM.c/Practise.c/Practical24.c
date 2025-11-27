#include <stdio.h>
struct Book {
    char title[100];
    char author[100];
    float amount;
};
void displayBookDetails(struct Book b) {
    printf("\n");
    printf("Book Title: %s\n", b.title);
    printf("Author Name: %s\n", b.author);
    printf("Amount: $%.2f\n", b.amount);
}

int main() {
    struct Book myBook;
    printf("Enter Book Title: ");
    fgets(myBook.title, sizeof(myBook.title), stdin);

    printf("Enter Author Name: ");
    fgets(myBook.author, sizeof(myBook.author), stdin);

    printf("Enter Amount: ");
    scanf("%f", &myBook.amount);
    displayBookDetails(myBook);
    return 0;
}