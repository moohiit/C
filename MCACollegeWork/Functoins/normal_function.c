
#include<stdio.h>
void add(int);

void main()
{
    int a=5;
    add(a);
}

void add(int a)
{
    a=a+10;
    printf("a = %d",a);
}