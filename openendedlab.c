#include<stdio.h>

struct Student {
    char name[100];
    int id;
    int grade;
    char course[100];
};

struct Student s1[100];
int count = 0;

void addstudent() {
    int n;
    printf("Enter the number of students to add: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("Enter the name of %dth student: ",i+1);
        scanf("%s",s1[count].name);
        printf("******************************************\n");
        printf("Enter the ID of %dth student: ",i+1);
        scanf("%d",&s1[count].id);
        printf("******************************************\n");
        printf("Enter the grade of %dth student: ",i+1);
        scanf("%d",&s1[count].grade);
        printf("******************************************\n");
        printf("Enter the course of %dth student: ",i+1);
        scanf("%s",s1[count].course);
        count++;
        printf("Student added successfully\n");
        printf("******************************************\n");
    }
}

void updategrade() {
    int id;
    printf("Enter the student ID to update grade: ");
    scanf("%d",&id);
    for (int i=0;i<count;i++) {
        if(id==s1[i].id) {
            printf("Enter the new grade: ");
            scanf("%d",&s1[i].grade);
            printf("Grade updated successfully\n");
            return;
        }
    }
    printf("******************************************\n");
    printf("Student with ID %d is not found\n", id);
}

void removeStudent() {
    int id;
    printf("Enter the student ID to remove: ");
    scanf("%d",&id);
    for (int i=0;i<count;i++) {
        if (id==s1[i].id) {
            for(int j=i;j<count-1;j++) {
                s1[j]=s1[j + 1];
            }
            count--;
            printf("Student removed successfully\n");
            printf("******************************************\n");
            return;
        }
    }
    printf("Student with ID %d is not found\n", id);
}

void studentsearch(){
    int id;
    printf("Enter student ID to search: ");
    scanf("%d",&id);
    for (int i=0;i<count;i++) {
        if (id == s1[i].id) {
            printf("******************************************\n");
            printf("Student name: %s\n",s1[i].name);
            printf("Student ID: %d\n",s1[i].id);
            printf("Student grade: %d\n",s1[i].grade);
            printf("Student course: %s\n",s1[i].course);
            return;
        }
    }
    printf("******************************************\n");
    printf("Student with ID %d is not found\n", id);
}

void studentrecord(){
    if(count==0){
        printf("No student record is found\n");
        return;
    }
    for(int i= 0;i<count;i++) {
        printf("******************************************\n");
        printf("Student name: %s\n",s1[i].name);
        printf("Student ID: %d\n",s1[i].id);
        printf("Student grade: %d\n",s1[i].grade);
        printf("Student course: %s\n",s1[i].course);
    }
}

int main() {
    for(;;){
        int choice;
        printf("******************************************\n");
        printf("1. To add student\n");
        printf("2. To update grade\n");
        printf("3. To remove student\n");
        printf("4. To search student\n");
        printf("5. To show student record\n");
        scanf("%d",&choice);

        if(choice==1){
            addstudent();
        }
        else if(choice==2) {
            updategrade();
        }
        else if(choice==3) {
            removeStudent();
        }
        else if(choice==4) {
            studentsearch();
        }
        else if(choice==5) {
            studentrecord();
        }
        else {
            printf("Invalid input\n");
        }
    }
}


