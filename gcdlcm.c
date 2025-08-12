#include<stdio.h>
int main()
{
      int a,b,i;
    printf("Enter a  :");
    scanf("%d",&a);

    printf("Enter b  :");
    scanf("%d",&b);

    int x=a,y=b;
    while(b%a!=0){
        int tem = b;
        b=a;
        a=tem%a;
    }
    int gcd = a;
    printf("GCD=%d\n",gcd);
    printf("LMC=%d\n",(x*y)/gcd);

}
