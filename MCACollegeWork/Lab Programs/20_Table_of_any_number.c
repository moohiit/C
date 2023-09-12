
//write a program to print the table of any number.
#include<stdio.h>
int main(){
    int n,i=1;
    printf("Enter Any Number To get Table: ");
    scanf("%d",&n);
    while (i<=10)
    {
        printf("%dX%d=%d\n",n,i,n*i);
        i++;
    }
    
    return 0;
}