#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter a  :");
    scanf("%d",&a);

    printf("Enter b  :");
    scanf("%d",&b);
    int sum=0;
    for(i=a;i<=b;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("sum=%d\n",sum);

}
