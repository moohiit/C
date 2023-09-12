/*
write a program to print the pattern:

      A 
     B C
    D E F
   G H I J
  K L M N O
 P O N M L K
  J I H G F
   E D C B
    A @ ?
     > = 
      <

*/


#include<stdio.h>
int main()
{
    int i,j,k;
    char ch='A';
    for(i=1;i<=5;i++)
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
    for(i=1;i<=6;i++)
    {
        for(k=1; k<=i;k++)
        {
            printf(" ");
        }
        for ( j = 6; j >= i; j--)
        {
            printf("%c ",ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}
