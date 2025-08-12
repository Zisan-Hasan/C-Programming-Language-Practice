#include<stdio.h>
int main()
{
    int arr[3][2];

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("% d",arr[i][j]);
        }
        printf("\n");
    }
     printf("\n");
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("% d",arr[j][i]);
        }
        printf("\n");
    }
     printf("\n");

      for(int i=0;i<3;i++){
        for(int j=1;j<2;j++){
            printf("% d",arr[i][j]);
        }
        printf("\n");
    }
     printf("\n");
     for(int i=0;i<1;i++){
        for(int j=0;j<3;j++){
            printf("% d",arr[j][i]);
        }
        printf("\n");
    }
}
