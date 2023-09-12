
//Write program to print the fibonnaci series.
#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i=1;
    printf("Enter the range of series:");
    scanf("%d",&n);
    printf("\n%d",a);
    printf("\n%d",b);
    c=a+b;
    printf("\n%d\n",c);
    while (i<=n-3)
    {
        a=b;
        b=c;
        c=a+b;
        printf("%d\n",c);
        i++;
    }
    return 0;

}