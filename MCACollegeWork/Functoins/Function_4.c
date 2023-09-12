#include<stdio.h>
int add(int,int);  //Declaration

void main(){  //Calling
    int a,b,c;
    printf("Enter the numbers:\n");
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    c=add(a,b);
    printf("Sum = %d",c);
}

int add(int x,int y){   //Defination    
    return x+y;
}