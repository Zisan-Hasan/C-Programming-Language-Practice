#include<stdio.h>
int main()
{
    int x,y,index=0;
    printf("Enter the size of arr1:");
    scanf("%d",&x);
    printf("Enter the size of arr2:");
    scanf("%d",&y);
    int arr1[x],arr2[y],arr3[index];

    for(int i=0;i<x;i++){
        printf("Enter %dth arr1:",i);
        scanf("%d",&arr1[i]);
    }
     for(int i=0;i<y;i++){
        printf("Enter %dth arr2:",i);
        scanf("%d",&arr2[i]);
    }
     for(int i=0;i<x;i++){
        printf("% d",arr1[i]);
    }
    printf("\n");
    for(int i=0;i<x;i++){
        printf("% d",arr2[i]);
   }
//    printf("\n");
//    for(int i=0;i<x;i++){
//        printf(" %d",arr1[i]);
//    }
//    for(int i=0;i<x;i++){
//        printf(" %d",arr2[i]);
//    }


   for(int i=0;i<x;i++){
    arr3[index]=arr1[i];
    index++;
   }
   for(int i=0;i<x;i++){
    arr3[index]=arr2[i];
    index++;
   }
    printf("\n");
    for(int i=0;i<x+y;i++){
        printf("% d",arr3[i]);
    }


}
