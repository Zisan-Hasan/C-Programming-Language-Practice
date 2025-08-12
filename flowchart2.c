#include <stdio.h>
int main()
{
    int n;
    printf("Enter the first number :");
    scanf("%d",&n);
    int p;
    p = n%2;
    if(p==0){
            printf("%d is even number.\n",n);
    }
    else{
            printf("%d is odd number.\n",n);}
}
