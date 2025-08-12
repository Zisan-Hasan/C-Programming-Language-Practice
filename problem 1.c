//Name:Zisan Hasan
//Id:242014055

#include <stdio.h>

void insertionSort(int arr[],int n) {
    for (int i=1;i<n;i++) {
        int key=arr[i];
        int j;
        for(j=i-1;j>=0&&arr[j]<key;j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }
}

int binarySearch(int arr[],int n,int x) {
    int left=0,right=n-1;
    for (;left<=right;) {
        int mid=left+(right-left)/2;
        if(arr[mid]==x){
                return 1;
        }
        if(arr[mid]<x){
                right=mid-1;
        }
        else {
                left = mid + 1;
        }
    }
}

int main() {
    int n1, n2, x;

    printf("Enter number of scores for Lab-A: ");
    scanf("%d", &n1);
    int labA[n1];
    printf("Enter %d scores for Lab-A: ", n1);
    for (int i=0;i<n1;i++){
            scanf("%d", &labA[i]);
    }


    printf("Enter number of scores for Lab-B: ");
    scanf("%d", &n2);
    int labB[n2];
    printf("Enter %d scores for Lab-B: ", n2);
    for (int i=0;i<n2;i++){
            scanf("%d" ,&labB[i]);
    }


    printf("Enter score to search for: ");
    scanf("%d",&x);

    int merged[n1+n2];
    for(int i=0;i<n1;i++){
            merged[i]=labA[i];
    }

    for(int i=0;i<n2;i++){
            merged[n1+i]=labB[i];
    }
    insertionSort(merged,n1+n2);

    int found=binarySearch(merged,n1+n2,x);

    printf("Merged and sorted scores: ");
    for(int i=0;i<n1+n2;i++){
            printf("%d ",merged[i]);
    }
    printf("\n");

    if(found){
        printf("Score %d is present in the list.\n",x);
    }
    else{
        printf("Score %d is not present in the list.\n",x);
    }
}

