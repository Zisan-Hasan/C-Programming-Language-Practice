#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the first number :");
    scanf("%d",&marks);
    if(marks>=50){
        printf("Passed\n");
    }
    else{
        printf("Failed\n");
    }
}
