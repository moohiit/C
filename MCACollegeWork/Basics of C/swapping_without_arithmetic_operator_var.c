
// write a program to swap two numbers without using any arithmetic operation.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers to swap:\n");
    printf("a=");
    scanf("%d",&a);
     printf("b=");
    scanf("%d",&b);

                // if a=5 and b=6 and using XOR we swap them.
    a = a ^ b;  // now a is 3 and b is 6
    b = a ^ b;  // now a is 3 but b is 5 (original value of a)
    a = a ^ b;  // now a is 6 and b is 5, numbers are swapped

    printf("Number after swapping:\na=%d\tb=%d",a,b);
    return 0;
}