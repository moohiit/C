
//write program to check a number is prime or not.
#include<stdio.h>
int main()
{
    int num,sum=0,i,no;
    printf("Enter Any number to check : ");
    scanf("%d",&num);
    no=num;
    for(i=1;i<num;i++)
    {
        if(num%i==0){
            sum+=i;
        }
    }
    
    if (sum==num)
    {
        printf("%d is Perfect Number.",no);
    }
    else
    {
        printf("%d is not a Perfect Number.",no);
    }
    return 0;
}