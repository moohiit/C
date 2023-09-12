//Write a program print size of data type in table format.
#include<stdio.h>
int main()
{
    int i;
    float f;
    double d;
    char ch;
    long l;

    printf("\t**Data types and its size**\n");
    printf("Size of 'int'(Integer) data type :\t%d\n",sizeof(i));
    printf("Size of 'float'(decimal) data type :\t%d\n",sizeof(f));
    printf("Size of 'double'(big decimal) data type :%d\n",sizeof(d));
    printf("Size of 'char'(character) data type :\t%d\n",sizeof(ch));
    printf("Size of 'long'(Integer) data type :\t%d\n",sizeof(l));

    return 0;
}