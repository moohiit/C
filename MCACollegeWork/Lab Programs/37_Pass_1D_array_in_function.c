
//Write a program to pass 1D Array in function.
#include<stdio.h>

void array_sum(int arr[], int n);

int main(){
    int n,i;
    printf("Enter the length of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array:");
    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    //Sum of array using passing array into the function array_sum().
    array_sum(a,n);
}

void array_sum(int arr[], int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("Sum of array : %d",sum);

}