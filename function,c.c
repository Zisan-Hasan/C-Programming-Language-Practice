#include<stdio.h>
int prime(int n){
for(int i=2;i<=n/2;i++){
    if(n/i==0){
        return 0;
    }
}
return 1;
}
int main()
{
    int n;
    printf("Enter a number:");

scanf("%d",&n);
if(prime(n)==1){
    printf("%d is a prime number",n);

}
else{
    printf("%d is not a prime number",n);
}
}
