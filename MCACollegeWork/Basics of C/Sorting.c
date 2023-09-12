
//Write a program to sorting an array.
#include<stdio.h>
int main()
{
    int n,i,first,mid,last;
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
    printf("]");
    

}