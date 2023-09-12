
#include<stdio.h>
int main()
{
    int n,rem,sum=0,no;
    printf("Enter any number to check:");
    scanf("%d",&n);
    no=n;
    while (n>0)
    {
        rem=n%10;
        sum+=rem*rem*rem;
        n/=10;
    }
    if (sum==no)
    {
        printf("%d is Amstrong Number",no);
    }else{
        printf("%d is not Amstrong Number",no);

    }
    return 0;
}
