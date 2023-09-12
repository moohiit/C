

//WAP to find largest and second largest element in an array.
#include<stdio.h>
int main(){
    printf("Enter the Length of the array :");
    int n;
    scanf("%d",&n);
    int i, large1=0,large2=0,a[n];
    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        if(large1<a[i]){
            large1=a[i];
        }
    }
    for(i=0;i<n;i++){
        if(a[i]>large2 && a[i]<large1){
            large2=a[i];
        }
    }
    printf("\nArray: [ ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);        
    }printf("]\n");

    printf("Largest element of the array: %d\n",large1);
    printf("Second Largest element of the array: %d",large2);

}