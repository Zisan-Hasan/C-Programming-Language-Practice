#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employee {
    int empID;
    char name[100];
    int salary;
    struct Employee* next;
} Employee;

Employee* head = NULL;

void addEmployee(int id, char name[], int salary) {
    Employee* newNode = (Employee*)malloc(sizeof(Employee));
    newNode->empID = id;
    strcpy(newNode->name, name);
    newNode->salary = salary;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Employee* temp;
        for (temp = head; temp->next != NULL; temp = temp->next);
        temp->next = newNode;
    }
}

void removeEmployee(int id) {
    Employee* temp = head;
    Employee* prev = NULL;

    for (; temp != NULL; temp = temp->next) {
        if (temp->empID == id) {
            if (prev == NULL) {
                head = temp->next;
            } else {
                prev->next = temp->next;
            }
            free(temp);
            printf("Employee removed\n");
            return;
        }
        prev = temp;
    }
    printf("Employee not found\n");
}

void searchEmployee(int id) {
    Employee* temp;
    for (temp = head; temp != NULL; temp = temp->next) {
        if (temp->empID == id) {
            printf("ID: %d, Name: %s, Salary: %d\n", temp->empID, temp->name, temp->salary);
            return;
        }
    }
    printf("Employee not found\n");
}

void sortEmployees() {
    Employee *i, *j;
    int tempID, tempSalary;
    char tempName[100];

    for (i = head; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->empID > j->empID) {
                tempID = i->empID;
                i->empID = j->empID;
                j->empID = tempID;

                tempSalary = i->salary;
                i->salary = j->salary;
                j->salary = tempSalary;

                strcpy(tempName, i->name);
                strcpy(i->name, j->name);
                strcpy(j->name, tempName);
            }
        }
    }
}

void displayEmployees() {
    if (head == NULL) {
        printf("No employees in the list\n");
        return;
    }

    sortEmployees();

    Employee* temp;
    for (temp = head; temp != NULL; temp = temp->next) {
        printf("ID: %d, Name: %s, Salary: %d\n", temp->empID, temp->name, temp->salary);
    }
}

int main() {
    int choice, id, salary;
    char name[100];

    for (;;) {
         printf("******************************************");
        printf("\n1. Add Employee\n2. Remove Employee\n3. Search Employee\n4. Display Employees\n5. Exit\n");
        printf("******************************************\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter ID: ");
            scanf("%d", &id);
            getchar();
            printf("Enter Name: ");
            fgets(name, sizeof(name), stdin);
            name[strcspn(name, "\n")] = '\0';
            printf("Enter Salary: ");
            scanf("%d", &salary);
            addEmployee(id, name, salary);
        } else if (choice == 2) {
            printf("Enter Employee ID to remove: ");
            scanf("%d", &id);
            removeEmployee(id);
        } else if (choice == 3) {
            printf("Enter Employee ID to search: ");
            scanf("%d", &id);
            searchEmployee(id);
        } else if (choice == 4) {
            displayEmployees();
        } else if (choice == 5) {
            break;
        } else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}

