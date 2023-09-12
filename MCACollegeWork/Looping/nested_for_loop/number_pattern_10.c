
/*
Write a program to print the number pattern:


*/
#include<stdio.h>
int main()
{
    int i,j,k,t=1;

    for(i=1;i<=6;i++){
        for(k=10;k>=i;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",t*t);
            t+=1;
        }
        printf("\n");
    }
    return 0;

}