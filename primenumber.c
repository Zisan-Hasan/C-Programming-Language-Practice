#include<stdio.h>
int prime(int n){
    int lower,upper;
for(int i=lower;i<=upper;i++){
    if(n/i==0){
        return 0;
    }
}
return 1;
}
int main()
{
    int n,m;
    printf("Enter n:");

scanf("%d",&m);
 printf("Enter m:");

scanf("%d",&n);
if(prime(n)==1){
    printf("%d is a prime number",i);

}
else{
    printf("%d is not a prime number",i);
}
}
