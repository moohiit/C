
//Write a program to pass a 2D array in a function.
#include<stdio.h>

void array_sum(int n, int m, int arr[m][n])
{
    int i, j,sum=0;
    printf("Enter the elements in the array:\n");
    //Entering the values in the array and sum them all.
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("a[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
    }
    //Printing the the array.
    printf("\nArray:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
    printf("Sum of array: %d",sum);
}

int main(){

    //Declaring the dimension of the array.
    int n,m;
    printf("n = ");
    scanf("%d",&n);
    printf("m = ");
    scanf("%d",&m);
    int arr[n][m];

    //Calling Array sum function for getting the sum of array.
    array_sum(n,m,arr);
}