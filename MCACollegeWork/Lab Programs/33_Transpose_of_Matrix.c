

//Write a progam to print Transpose of a matrix.
#include<stdio.h>
int main(){
    int i,j,n,m;
    printf("Enter the Dimension of the matrix:\n");
    printf("n= ");
    scanf("%d",&n);
    printf("m= ");
    scanf("%d",&m);

    int a[n][m],t[m][n];
    //Enter the the elements of the Matrix.
    printf("Enter the elements of the Matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            t[j][i]=a[i][j];
        }
    }
    //printing the matrix:
    printf("Matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    //printing the transpose of matrix:
    printf("Transpose of Matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",t[i][j]);
        }printf("\n");
    }
}