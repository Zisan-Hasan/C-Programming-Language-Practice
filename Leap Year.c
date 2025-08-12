#include<stdio.h>
int main()
{
    int year;
    printf("Enter the value for year:");
    scanf("%d", &year);

    if((year%4==0 && year%100!=0)|(year%400==0)){
        printf("%d leap year\n",year);
    }
    else{
        printf("%d not leap year\n",year);
    }

}
