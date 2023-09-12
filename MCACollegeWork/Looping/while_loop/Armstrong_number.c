
//Write a program to check a number is Armstrong number or not.
#include<stdio.h>
int main()
{
    int arm=0,n,rem,no;
    printf("Enter any number to check the number is Armstrong or not: ");
    scanf("%d",&n);
    no=n;
    while (n>0)
    {
        rem=n%10;
        arm=arm+rem*rem*rem;
        n=n/10;
    }
    if (no==arm)
    {
        printf("\n%d is an Armstrong Number.",no);
    }
    else{
        printf("\n%d is not an Amstrong Number.",no);
    }
    
    
    return 0;
}