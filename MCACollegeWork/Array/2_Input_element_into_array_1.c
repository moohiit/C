
//Write program to input 10 element into an array during the run time.

#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter the elelment into array:\n");

    for(i=0;i<=9;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    //printing the elements of that array.
    printf("array=[ \t");
    for(i=0;i<=9;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("]");
}