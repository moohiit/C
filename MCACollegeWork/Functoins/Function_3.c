#include<stdio.h>
int add();  //Declaration

void main(){  //Calling
    int c;
    c=add();
    printf("Sum = %d",c);
}

int add(){   //Defination
    int a,b;
    printf("Enter the numbers:\n");
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    return a+b;
}