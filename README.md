#include <stdio.h>
#include <string.h>

int main() {
    char books[5][20] = {"Book A", "Book B", "Book C", "Book D", "Book E"};
    char selectedBook[20];
    int days;
    char choice;
    char repeat;

    do {
        printf("Welcome to my store\n");
        printf("How may I help you?\n");
        printf("Required book\n");
        
        printf("Here below are available books:\n");
        for (int i = 0; i < 5; i++) {
            printf("%c. %s\n", 'A' + i, books[i]);
        }

        printf("Choose one as per your need (Enter A, B, C, D, or E):\n");
        scanf(" %c", &choice);

        // Validate the choice
        if (choice < 'A' || choice > 'E') {
            printf("Invalid choice. Please select a valid option.\n");
            continue; // Go back to the start of the loop
        }

        // Get the selected book name
        strcpy(selectedBook, books[choice - 'A']);

        // Display the book details 
        printf("\nShow me specification of %s\n", selectedBook);
        printf("Book NO: %d\n", choice - 'A' + 1);
        printf("Author Name: Author of %s\n", selectedBook);
        printf("ISBN NO: 12345%d\n", choice - 'A');
        
        printf("Publisher: Publisher %c\n", choice);
        printf("Price: $%d\n", 10 * (choice - 'A' + 1));

        printf("\nHow many days do you require the book?\n");
        scanf("%d", &days);

        printf("\nThank you\n");

        if (days > 0) {
            printf("A book not taken out is taken by another person for %d days\n", days);
            printf("If another person asks for the same book, it will be unavailable for %d days\n", days);
        }

        printf("\nWould you like to check another book? (y/n): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');

    printf("\nThank you for visiting.\n");
    return 0;
}
