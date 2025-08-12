#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter n  :");
    scanf("%d",&n);
    int sum=0;
    for(i=1;i<=n*2;i++){
        if(i%2!=0){
            sum+=i;
        }
        }
        printf("sum = %d\n",sum);
        printf("Average = %f\n",(float)sum/n);
}
