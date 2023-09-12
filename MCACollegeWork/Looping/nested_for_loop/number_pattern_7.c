
/*
write a program to print a pattern:

1
3       5
5       7       9
7       9       11      13
9       11      13      15      17

*/
#include<stdio.h>
int main()
{
    int i,j,t;
    for(i=1;i<=5;i++){
        t=i-1;
        for(j=1;j<=i;j++){
            printf("%d\t",t+i);
            t+=2;
        }
        printf("\n");
    }
    return 0;
}