
//Write a program to sorting an array.
#include<stdio.h>
int main()
{
    int n,i,ele,first,mid,last;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of array:\n");
    for ( i = 0; i < n ; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    //printing the array:
    printf("Array: [ ");
     for ( i = 0; i < n ; i++)
    {
        printf("%d ",a[i]);
    }
    printf("]\n");

    //Sorting the array:
    int j,t;
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
    printf("Sorted Array: [ ");
     for ( i = 0; i < n ; i++)
    {
        printf("%d ",a[i]);
    }
    printf("]\n");

    printf("Enter your search element:");
    scanf("%d",&ele);

    first=0;
    last=n-1;
    mid=(first+last)/2;

    //Binary search start:
    while(first<=last){
            if(a[mid]==ele){
                printf("%d is matched in your array.",a[mid]);
                break;
            }
            else if(a[mid]>ele){
                last=mid-1;
            }
            else{
                first=mid+1;
            }
        mid=(first+last)/2;
    }
    if(first>last){
        printf("Not found!");
    }

}