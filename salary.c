#include <stdio.h>
int main()
{
    float basic,rentPer,grosssal;
    printf("Enter the basic salary:");
    scanf("%f",&basic);
    printf("Enter percentage of house rent:");
    scanf("%f",&rentPer);

    grosssal = basic + basic*(rentPer/100.0);
    printf("The total salary is %f",grosssal);
}
