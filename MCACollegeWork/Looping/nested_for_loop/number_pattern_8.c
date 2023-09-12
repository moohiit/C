
/*
write a program to print a pattern:

1
2       4
3       5       7
4       6       8       10
5       7       9       11      13

*/
#include<stdio.h>
int main()
{
    int i,j,t;
    for(i=1;i<=5;i++){
        t=i;
        for(j=1;j<=i;j++){
            printf("%d\t",t);
            t+=2;
        }
        printf("\n");
    }
    return 0;
}