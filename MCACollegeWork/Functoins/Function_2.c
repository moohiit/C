#include<stdio.h>
void add(int,int);  //Declaration

int main(){  //Calling
    int a,b;
    printf("Enter the numbers:\n");
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    add(a,b);
    return 0;
}

void add(int x,int y){   //Defination
    int z;
    z=x+y;
    printf("Sum= %d",z);
}