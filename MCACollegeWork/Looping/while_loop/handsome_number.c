
/*Write a program to check a number whether it is handsome number or not using function. 
Example: 1124 = 1+1+2 = 4 , 123 = 1+2 = 3. 
It mean last digit = sum of all previous digits. Then it is called handsome number.*/
#include<stdio.h>
int main()
{
    int n,no,rem,last,sum=0;
    printf("Enter any number to check whether number is Handsome or not: ");
    scanf("%d",&n);
    no=n;
    last=n%10;
    n=n/10;
    while (n>0)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    if (sum==last)
    {
        printf("%d is a Handsome number.",no);
    }
    else{
        printf("%d is not a Handsome number.",no);
    }
    return 0;
}