#include <stdio.h>

int main() {
    char studentName[50];
    int status, borrowedBooks;

    printf("Enter student's name: ");
    scanf(" %[^\n]", studentName);

    printf("Enter library account status (1 = Active, 0 = Inactive): ");
    scanf("%d", &status);

    printf("Enter number of currently borrowed books: ");
    scanf("%d", &borrowedBooks);

    printf("\n--- Borrowing Result ---\n");
    printf("Student Name: %s\n", studentName);

    if (status != 1) {
        printf("Borrowing: Denied\n");
        printf("Reason: Library account is inactive.\n");
    }
    else if (borrowedBooks >= 3) {
        printf("Borrowing: Denied\n");
        printf("Reason: You already have 3 or more borrowed books.\n");
    }
    else {
        printf("Borrowing: Allowed\n");
        printf("Reason: You may borrow another book.\n");
    }

    return 0;
}
