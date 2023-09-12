#include<stdio.h>
int main()
{
    int i,n,a[50];
    printf("Enter the length of array:");
    scanf("%d",&n);

    printf("Enter the values in the array:");
    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("Array:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    printf("\nConverted array:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]*(-1));
    }
    printf("\nDifference of above two array:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]+a[i]*(-1));
    }

    
    return 0;
}