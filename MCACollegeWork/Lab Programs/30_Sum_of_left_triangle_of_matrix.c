
//WAP to enter some elements in an matrix and calculate sum only left triangles elements.
#include<stdio.h>
int main(){
    int i,j,sum=0,a[10][10],m;
    printf("Enter the Dimension of Matrix (M*M):\n");
    printf("M=");
    scanf("%d",&m);

    printf("Enter the Elements of Matrix :\n");
    for ( i = 0; i <m ; i++){
        for ( j = 0; j < m; j++){
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            if (i==j || i>j)
            {
                sum+=a[i][j];
            }
            
        }
    }
    printf("\n");
    printf("Array:\n");
    for ( i = 0; i <m ; i++){
        for ( j = 0; j < m; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Sum of left Triangle of the Matrix: %d",sum);
}