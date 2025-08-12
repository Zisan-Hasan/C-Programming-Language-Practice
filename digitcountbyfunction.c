#include<stdio.h>
int Digitcount(int n){
   int count=0;
   while(n!=0){
    n/=10;
    count++;
   }
   printf("Number of digits is %d",count);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    Digitcount(n);
}
