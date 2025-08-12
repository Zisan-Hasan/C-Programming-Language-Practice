#include<stdio.h>
int main()
{
    int a, b, c,largest, smallest;
    printf("Enter the value for three numbers:");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b && a>c)
    {
        largest=a;
    }
    else if(b>c)
    {
        largest=b;
    }
    else
    {
        largest=c;
    }
    if(a<b && a<c)
    {
        smallest=a;
    }
    else if(b<c)
    {
        smallest=b;
    }
    else
    {
        smallest=c;
    }

    printf("%d is largest\n",largest);
    printf("%d is smallest\n",smallest);
    if(largest%2==0)
    {
        printf("%d is even\n", largest);
    }
    else
    {
        printf("%d is odd\n", largest);
    }

    if(smallest%2==0)
    {
        printf("%d is even\n", smallest);
    }
    else
    {
        printf("%d is odd\n", smallest);
    }

    return 0;
}
