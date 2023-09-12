
//WAP to SORT array elements using Bubble Sort.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the Length of the Array: ");
    scanf("%d",&n);
    int i,j,swap,a[n];
    printf("Enter the Elements of your array:\n");
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

}