#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Enter two numbers to swap:\n");
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    
    printf("Numbers before swapping: a=%d and b=%d\n",a,b);
    t=a;
    a=b;
    b=t;
    printf("Numbers after Swapping: a=%d and b=%d",a,b);
    return 0;
}