/*
write a program to print the pattern:

     A 
    B C
   D E F
  G H I J
 K L M N O

*/


#include<stdio.h>
int main()
{
    int i,j,k;
    char ch='A';
    for(i=1;i<=6;i++)
    {
        for(k=6; k>=i;k--)
        {
            printf(" ");
        }
        for ( j = 1; j <= i; j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
