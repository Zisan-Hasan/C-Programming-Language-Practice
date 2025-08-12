#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

typedef struct {
    int bookID;
    char title[100];
    char author[100];
} Book;

Book library[MAX_BOOKS];
int bookCount = 0;

void addBook(int id, char title[], char author[]) {
    if (bookCount < MAX_BOOKS) {
        library[bookCount].bookID = id;
        strcpy(library[bookCount].title, title);
        strcpy(library[bookCount].author, author);
        bookCount++;
    }
}

void removeBook(int id) {
    int i, j, found = 0;
    for (i = 0; i < bookCount; i++) {
        if (library[i].bookID == id) {
            found = 1;
            for (j = i; j < bookCount - 1; j++) {
                library[j] = library[j + 1];
            }
            bookCount--;
            break;
        }
    }
    if (!found) {
        printf("Book not found\n");
    }
}


void sortBooks() {
    int i, j;
    for (i = 0; i < bookCount - 1; i++) {
        for (j = 0; j < bookCount - i - 1; j++) {
            if (library[j].bookID > library[j + 1].bookID) {
                Book temp = library[j];
                library[j] = library[j + 1];
                library[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int id) {
    int left = 0, right = bookCount - 1;
    int mid;
    for (; left <= right;) {
        mid = (left + right) / 2;
        if (library[mid].bookID == id) return mid;
        else if (library[mid].bookID < id) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

void displayBooks() {
    int i;
    if (bookCount == 0) {
        printf("Library is empty\n");
        return;
    }
    sortBooks();
    for (i = 0; i < bookCount; i++) {
        printf("ID: %d, Title: %s, Author: %s\n", library[i].bookID, library[i].title, library[i].author);
    }
}

int main() {
    int i, choice = 0, id;
    char title[100], author[100];

    for (;;) {
        printf("******************************************");
        printf("\n1. Add Book\n2. Remove Book\n3. Search by ID\n4. Display Books\n5. Exit\n");
        printf("******************************************\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Book ID: ");
            scanf("%d", &id);
            getchar();
            printf("Enter Title: ");
            fgets(title, sizeof(title), stdin);
            title[strcspn(title, "\n")] = '\0';
            printf("Enter Author: ");
            fgets(author, sizeof(author), stdin);
            author[strcspn(author, "\n")] = '\0';
            addBook(id, title, author);
        }
        else if (choice == 2) {
            printf("Enter Book ID to remove: ");
            scanf("%d", &id);
            removeBook(id);
        }
        else if (choice == 3) {
            printf("Enter Book ID to search: ");
            scanf("%d", &id);
            sortBooks();
            i = binarySearch(id);
            if (i != -1) {
                printf("Book found: Title: %s, Author: %s\n", library[i].title, library[i].author);
            } else {
                printf("Book not found\n");
            }
        }
        else if (choice == 4) {
            displayBooks();
        }
        else if (choice == 5) {
            break;
        }
        else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}

