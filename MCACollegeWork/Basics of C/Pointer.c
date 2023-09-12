
//Pointer can hold the address of another value.

#include<stdio.h>
int main()
{
    int *ptr;
    int a=5;
    ptr = &a;
    printf("a=%d\n",*ptr);
    printf("address of a = %p",ptr);
}