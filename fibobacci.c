#include<stdio.h>
int main()
{
    int f=0,s=1;
    printf("0 1");
    while(f+s<=300){
        int next = f + s;
        printf(" %d ",next);
        f=s;
        s=next;
    }
    printf("\n");
}
