
/*
write a program to print a pattern:

2 
2 4
2 4 6
2 4 6 8
2 4 6 8 10

*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j*2);
        }
        printf("\n");
    }
    return 0;
}