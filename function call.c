#include <stdio.h>
#include <math.h>
int numberOfDigits(int n);
void isArmstrong(int n);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    isArmstrong(n);
}

void isArmstrong(int n){
    int digits = numberOfDigits(n);
    int x = n;
    int sum=0;
    while(x>0){
        int base = x%10;
        sum+=pow(base, digits);
        x/=10;
    }
    if(sum==n){
        printf("Armstrong\n");
    }
    else{
        printf("Not Armstrong\n");
    }

}

int numberOfDigits(int n){
    int count=0;
    while(n>0){
        count++;
        n/=10;
    }
    return count;
}
