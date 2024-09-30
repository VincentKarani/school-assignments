#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bookID, due_date, return_date, overdue, fine;

    printf("Enter the book ID: ");
    scanf("%d", &bookID);

    printf("Enter due days: ");
    scanf("%d", &due_date);

    printf("Enter return days: ");
    scanf("%d", &return_date);

    overdue = return_date - due_date;

    if(overdue <= 0) {
        printf("BookID: %d\ndueDate: %d\nreturnDate: %d\ndaysOverdue: %d\nfineRate: %d\nfineAmount %d\n", bookID, due_date, return_date, 0, 0, 0);
    }
    else if(overdue >0 && overdue <= 7) {
        printf("BookID: %d\ndueDate: %d\nreturnDate: %d\ndaysOverdue: %d\nfineRate: %d\nfineAmount %d\n", bookID, due_date, return_date, overdue, 20, overdue * 20);
    }
    else if(overdue >=8 && overdue <= 14) {
        printf("BookID: %d\ndueDate: %d\nreturnDate: %d\ndaysOverdue: %d\nfineRate: %d\nfineAmount %d\n", bookID, due_date, return_date, overdue, 50, overdue * 50);
    }
    else {
        printf("BookID: %d\ndueDate: %d\nreturnDate: %d\ndaysOverdue: %d\nfineRate: %d\nfineAmount %d\n", bookID, due_date, return_date, overdue, 100, overdue * 100);
    }

    return 0;
}
