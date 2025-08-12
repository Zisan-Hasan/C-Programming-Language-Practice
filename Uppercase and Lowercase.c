#include<stdio.h>
int main()
{
    char letter, uppercase, lowercase;
    printf("Enter the letter:");
    scanf("%c", &letter);
    if(letter>='A'&& letter<='Z'){
        printf("Lower case %c",letter+32);
    }
    else if(letter>='a'&& letter<='z') {
        printf("Upper case %c",letter-32);
    }
    else{
        printf("Invalid");
    }
}
