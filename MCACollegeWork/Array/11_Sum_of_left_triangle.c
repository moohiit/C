
//WAP to find the sum of the diagonal elements:
#include<stdio.h>
int main(){
    int i,j,a[4][4],sum=0;

    printf("Enter the elements of the array\n");
    for(i=0;i<=3;i++){
        for(j=0;j<=3;j++){
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            if(i>=j){
            sum+=a[i][j];
            }
        }
    }

    printf("Array= \n");
    for(i=0;i<=3;i++){
        for(j=0;j<=3;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }

    printf("Sum of left triangle elements of the array: %d",sum);
}