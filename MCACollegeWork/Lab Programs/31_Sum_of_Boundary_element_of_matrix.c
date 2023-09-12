
//WAP to enter some elements in an matrix and calculate sum of only Boundary elements.
#include<stdio.h>
int main(){
    int i,j,sum=0,n;
    printf("Enter the dimension of Matrix(n*n) :");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the Elements of the Matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            if(i==0||i==(n-1)||j==0||j==(n-1)){
                sum+=a[i][j];
            }
        }
    }
    printf("Matrix: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    printf("Sum of Boundary Elements of the Array: %d",sum);
}