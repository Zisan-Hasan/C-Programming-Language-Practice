#include <stdio.h>
int main()
{
    int days,years,remaningdays;
    printf("Enter the number of days:");
    scanf("%d",&days);
    years = days / 365;
    remaningdays = days%365;
    printf("%d years and %d days",years,remaningdays);
}
