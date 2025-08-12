#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the size of a array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %dth array:",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int a,b;
    printf("\n");
    printf("Enter the position,where the number to be inserted:");
    scanf("%d",&a);
    printf("Enter the number to be inserted:");
    scanf("%d",&b);
    for(int i=n;i>=a;i--){
        arr[i+1]=arr[i];
    }
    arr[a]=b;
    n=n+1;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int x;
    printf("\n");
    printf("Enter the position of the number to be deleted:");
    scanf("%d",&x);
    for(int i=x;i<n;i++){
        arr[i]=arr[i+1];
        n=n-1;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


}
