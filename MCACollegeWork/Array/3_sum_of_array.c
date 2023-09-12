
//Write program to input 10 element into an array and print thier sum.

#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("Enter the elelment into array:\n");

    for(i=0;i<=9;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    //printing the sum of that array.
    printf("Sum of elements of array:%d",sum);
   
}