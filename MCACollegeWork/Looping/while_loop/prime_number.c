
//Write a program to check a number is prime or not.
#include<stdio.h>
int main()
{
    int n,flag=0,i=2;
    printf("Enter any Number to check a number is prime or not : ");
    scanf("%d",&n);
    while (i<=n/2)
    {
        if(n%i==0){
            flag=1;
            break;
        }
        i++;
    }
    if (flag==0)    
    {
        printf("%d is Prime Number.",n);
    }
    else{
        printf("%d is not a Prime Number.",n);
    }
    return 0;
}