
//Write a program to search an element from an array using linear search:
#include<stdio.h>
int main(){
    int i,n,ele,flag=0;
    printf("Enter the length of array:");
    scanf("%d",&n);

    int a[n];
    for ( i = 0; i < n; i++)
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

    printf("Enter the element to search:");
    scanf("%d",&ele);

    //Linear search start:
    for ( i = 0; i < n; i++)
    {
        if (ele==a[i])
        {
            flag=1;
            break;
        }
    }

    if(flag==1){
        printf("%d is found at a[%d]",a[i],i);
    }
    else
    {
        printf("Not found!");
    }
    
    
}