
//Write a program to search an element using binary search operation.
#include<stdio.h>
int main()
{
    int first,last,mid,n,i,j,t;
    printf("Enter the range of an array:");
    scanf("%d",&n);
    int a[n];

    //Enter elements of array:
    printf("Enter your element:\n");
    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    first=0;
    last=n-1;
    mid=(first+last)/2;

    //sorting the elements:
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    //printing the sorted array:
    printf("Sorted array:\n");
    printf("[");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }printf("]\n");

    int ele;
    printf("Enter your search element:");
    scanf("%d",&ele);

    //binary search start:
    while (first<=last)
    {
            if(ele==a[mid]){
                printf("%d is Found at %d",a[mid],mid);
                break;
            }else if(ele>a[mid]){
                first=a[mid]+1;
            }else{
                last=a[mid]-1;
            }
            mid=(first+last)/2;
    }
    
    if(first>last){
        printf("Not found!");
    }
}