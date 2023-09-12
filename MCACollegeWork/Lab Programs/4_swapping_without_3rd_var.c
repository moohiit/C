//Write a program to swap two numbers without using third variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers to Swap:\n");
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    printf("Numbers before swapping:\na=%d\tb=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("Numbers after swapping:\na=%d\tb=%d",a,b);
    return 0;

}