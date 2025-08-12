#include <stdio.h>
int main()
{
    int a,b,sum,sub,mul,div;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    sum = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;
    if (b==0){
        printf("Not possible to divide by 0 ",div);
    }
    else{
        printf("The div is %d\n",div);
    }
    printf("The sum is %d\n",sum);
    printf("The sub is %d\n",sub);
    printf("The mul is %d\n",mul);
}
