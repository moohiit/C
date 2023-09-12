

//WAP To calculate sum of Two Matrix.
#include<stdio.h>
int main(){
    int i,j,sum=0,n;
    printf("Enter the dimension of Matrix(n*n) :");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    //Enter the elements of Matrix A
    printf("Enter the Elements of the Matrix A:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //Enter the elements of Matrix B
    printf("Enter the Elements of the Matrix B:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    //Printing the matrix A:
    printf("Matrix A: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    //Printing the matrix B:
    printf("Matrix B: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }printf("\n");
    }
    //Printing the Sum of Matrices A nad B.
    printf("Matrix A+B: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }printf("\n");
    }
}
