#include<stdio.h>
void add();  //Declaration

void main(){  //Calling
    add();
}

void add(){   //Defination
    int a,b,c;
    printf("Enter the numbers:\n");
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    c=a+b;
    printf("Sum= %d",c);
}
