
//Write a program to find the largest elemnt of the array.

#include<stdio.h>
int main()
{
    int a[10],i,large=0;
    printf("Enter the elements of the array:\n");
    for(i=0;i<=9;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        if(a[i]>large){
            large=a[i];
        }
    }
    printf("Largest number out of the array is : %d",large);
}