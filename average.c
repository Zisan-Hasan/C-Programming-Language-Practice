#include <stdio.h>
int main()
{
    int a,b,c,d;
    float avg;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    printf("Enter d:");
    scanf("%d",&d);
    avg = (a + b + c + d)/4;
    printf("The avg is %f",avg);

}
