
#include<stdio.h>
int main()
{
    int i,j,p=1;
    for(i=0;i<=4;i++){
        for(j=0;j<=i;j++){
            printf("%d ",p);
            p++;
        }
        printf("\n");
    }
    return 0;
}