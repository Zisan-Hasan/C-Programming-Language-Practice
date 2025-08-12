#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a, b, c :");
    scanf("%d, %d, %d ",&a ,&b, &c);
    if(a>b && a>c ){
        printf("%d a is the largest",a);
    }
    else if(b>c && b>a){
        printf("%d b is the largest",b);
    }
     else{
        printf("%d c is the largest ",c);
    }

    }

