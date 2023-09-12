
//WAP to enter 10 elements in an array and calculate sum.
#include<stdio.h>
int main(){
    printf("Enter the elements of array:\n");
    int i,a[10],sum=0;
    for(i=0;i<10;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("\nArray: [ ");
    for(i=0;i<10;i++){
        printf("%d ",a[i]);        
    }printf("]\n");
    printf("Sum of array: %d",sum);
}