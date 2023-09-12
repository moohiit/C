
//WAP to Search the element in an array list using Binary Search.
#include<stdio.h>
int main(){
    int i,j,ele,first,last,mid,n,swap;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\nArray: [ ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }printf("]\n");

    //Sorting the array:Using the Bubble sort
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[j]>a[j+1]) /* For decreasing order use '<' instead of '>' */
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
    }
    printf("\nSorted Array: [ ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);        
    }printf("]\n");

    //Binary Search start:
    printf("Enter the Search element:");
    scanf("%d",&ele);
    first=0;
    last=n-1;
    mid=(first+last)/2;

    while (first<=last)
    {
        if(ele==a[mid]){
            printf("%d is found in the array.",ele);
            break;
        }else if(ele>a[mid]){
            first=mid+1;
        }else{
            last=mid-1;
        }
        mid=(first+last)/2;
    }
    if(first>last){
        printf("Not found!");
    }
    
}