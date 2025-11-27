#include <stdio.h>
#include <string.h>
union Library {
    int accessionNumber;
    char title[100];
    char author[100];
    float price;
    int issuedFlag;
};
struct Book {
    union Library details;
    char title[100];
    char author[100];
    float price;
    int issuedFlag;
};
void enterBookDetails(struct Book *book) {
    printf("Enter Accession Number: ");
    scanf("%d", &book->details.accessionNumber);

    printf("Enter Book Title: ");
    getchar(); // Clear newline
    fgets(book->title, sizeof(book->title), stdin);
    book->title[strcspn(book->title, "\n")] = 0;

    printf("Enter Author Name: ");
    fgets(book->author, sizeof(book->author), stdin);
    book->author[strcspn(book->author, "\n")] = 0;
    printf("Enter Price: ");
    scanf("%f", &book->details.price);

    printf("Is the book issued? (1 for Yes, 0 for No): ");
    scanf("%d", &book->issuedFlag);
    book->details.issuedFlag = book->issuedFlag;
}
void displayBookDetails(struct Book book) {
    printf("\nBook Details:\n");
    printf("Accession Number: %d\n", book.details.accessionNumber);
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: $%.2f\n", book.details.price);
    printf("Issued: %s\n", book.details.issuedFlag ? "Yes" : "No");
}

int main() {
    struct Book myBook;
    enterBookDetails(&myBook);
    displayBookDetails(myBook);
    return 0;
}
