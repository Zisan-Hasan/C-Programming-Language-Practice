#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the first number :");
    scanf("%d",&marks);
    if(marks%2==0){
        printf("Even number\n");
    }
    else{
        printf("Odd number\n");
    }
}
