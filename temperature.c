#include <stdio.h>
int main()
{
    int x,c;
    printf("Enter the farenhite value : ");
    scanf("%d",&x);
    c = (x-32)*5%9;
    printf("%d",c);
}
