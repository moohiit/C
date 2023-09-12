
// Write a program to print an array using a function.

#include<stdio.h>

void add(int [][3]);

void main()
{
    int a[3][3]={
        12,23,25,
        52,12,32,
        52,36,23
    };
    add(a);

}

void add(int a[3][3])
{
    int sum=0,i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum+=a[i][j];
        }
    }
    printf("sum = %d",sum);
}