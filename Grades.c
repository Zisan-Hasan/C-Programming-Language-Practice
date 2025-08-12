#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the value of marks:");
    scanf("%d", &marks);
    if(marks>=90 && marks <=100){
        printf("A+");
    }
    else if(marks>=85 && marks <=89){
        printf("A");
    }
    else if(marks>=80 && marks <=84){
        printf("A-");
    }
    else if(marks>=75 && marks <=79){
        printf("B+");
    }
    else if(marks>=70 && marks <=74){
        printf("B-");
    }
    else
        printf("F");


}
