#include<stdio.h>
int main()
{
    int n,count=0;
    int a[n];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("enter the numbers:");
    for(int i=0; i<n; i++)
    {
        scanf("%d",& a[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                count++;
                break;
            }
        }
    }
    printf("Total number of duplicate elements found in the array: %d\n", count);
    return 0;
}

