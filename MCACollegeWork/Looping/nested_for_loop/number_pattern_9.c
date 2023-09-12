
/*
write a program to print a pattern:

1
3       5
7       9       11
13      15      17      19
21      23      25      27      29

*/
#include<stdio.h>
int main()
{
    int i,j,t=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d\t",t);
            t+=2;
        }
        printf("\n");
    }
    return 0;
}