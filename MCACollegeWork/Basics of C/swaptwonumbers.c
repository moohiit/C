#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Enter two numbers to swap:\n");
    scanf("%d%d",&a,&b);
    printf("Numbers before swapping: a=%d and b=%d\n\n",a,b);
    t=a;
    a=b;
    b=t;
    printf("Numbers after Swapping: a=%d and b=%d",a,b);
    return 0;
}