

//WAP to Search the element in an array list using linear Search.
#include<stdio.h>
int main(){
    printf("Enter the length of array:");
    int n;
    scanf("%d",&n);
    int a[n],i,ele;
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\nArray: [ ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }printf("]");

    //Linear search start:
    printf("\nEnter an element to search: ");
    scanf("%d",&ele);
    for(i=0;i<n;i++){
        if(ele==a[i]){
            printf("%d found at index %d\n",ele,i);
        }
    }
}