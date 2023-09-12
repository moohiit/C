
/*
Write a program to print the pattern:

A 
B C
D E F
G H I J
K L M N O
P Q R S T U
V W X Y Z [ \
] ^ _ ` a b
c d e f g
h i j k
l m n
o p
q

*/
#include<stdio.h>
int main()
{
    int i,j;
    char ch='A';
    for(i=1;i<=6;i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    for(i=1;i<=7;i++)
    {
        for ( j =7; j >= i; j--)
        {
            printf("%c ",ch );
            ch++;
        }
        printf("\n");
    }
    return 0;
}
