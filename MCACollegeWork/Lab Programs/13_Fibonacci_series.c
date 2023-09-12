
//Write a program to print fibonacci series.
#include<stdio.h>
int main()
{
    int i=1,a=0,b=1,c,n;
    printf("Enter the length of Series: ");
    scanf("%d",&n);
    printf("%d\n",a);
    printf("%d\n",b);
    c=a+b;
    printf("%d\n",c);

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