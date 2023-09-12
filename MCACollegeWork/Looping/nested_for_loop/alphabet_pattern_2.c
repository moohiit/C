
/*
Write a progrma to print the pattern:

A B C D E F 
G H I J K
L M N O
P Q R
S T
U                                  

*/
#include<stdio.h>
int main()
{
    int i,j;
    char ch='A';
    for(i=1;i<=6;i++)
    {
        for ( j =6; j >= i; j--)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
