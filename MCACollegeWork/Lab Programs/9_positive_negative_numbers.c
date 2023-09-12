
//Write a program to check number whether it is positive or negative.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Any number to check: ");
    scanf("%d",&n);
    if (n>=0)
    {
        printf("%d is positive",n);
    }
    else{
        printf("%d is Negative",n);
    }    
    return 0;
}