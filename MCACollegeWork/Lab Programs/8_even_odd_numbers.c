
//Write a program to check number whether it is even or odd.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Any number to check: ");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("%d is Even",n);
    }
    else{
        printf("%d is Odd",n);
    }    
    return 0;
}