/*
write a program to print the pattern:

           * 
         * * *
       * * * * *
     * * * * * * *
   * * * * * * * * * 

*/


#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        for(k=10; k>=i*2;k--)
        {
            printf(" ");
        }
        for ( j = 0; j <= i*2; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
