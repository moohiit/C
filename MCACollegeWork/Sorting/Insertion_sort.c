
//Write a program to sort an array using Insersion sort.
#include<stdio.h>
int main(){
    int n,i,j,temp;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int a[n];
    //enter the element int he array.
    printf("Enter the elements in the array:\n");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    //printing the Array:
    printf("\nArray : [ ");
     for ( i = 0; i < n; i++){
        printf("%d ",a[i]);
    }printf("]\n");
    //Sorting the array using the Insersion sort.
    for(i=0; i<n; i++){
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    //printing the sorted Array:
    printf("\nSorted Array : [ ");
     for ( i = 0; i < n; i++){
        printf("%d ",a[i]);
    }printf("]\n\n");

    return 0;
}