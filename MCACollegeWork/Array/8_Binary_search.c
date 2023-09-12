
//Write a program to search elements from an array: Using Binary search
#include<stdio.h>
int main()
{
    int n,i,j,t,ele,first,last,mid;
    printf("Enter the length of array:");
    scanf("%d",&n);
    n-=1;
    printf("Enter the element of your array:\n");
    int a[n];
    for(i=0;i<=n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    //Arrange the elements in ascending order:
    for(i=0;i<=n;i++){
        for(j=i;j<=n;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    //Printing Sorted array:
    printf("Sorted Array: [ ");
    for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }printf("]\n");

    printf("Enter your search element:");
    scanf("%d",&ele);
    first=0;
    last=n;
    mid=(first+last)/2;

    //Binary search start:
    while(first<=last){
        if(a[mid]==ele){
            printf("%d matched in your array.",a[mid]);
            break;
        }
        else if (a[mid]<ele)
        {
            first=mid+1;
        }
        else
        {
            last=mid-1;
        }
        mid=(first+last)/2;
        
    }

    if(first>last)
    {
        printf("Element not Found!");
    }
    return 0;
}