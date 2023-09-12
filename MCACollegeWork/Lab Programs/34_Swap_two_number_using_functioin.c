
//Write a program to swap two number using Function.
#include<stdio.h>
void swap(int,int);
int main(){
    int a,b;
    printf("Enter Your Numbers:\n");
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    swap(a,b);
}
void swap(int a,int b){
    printf("Before Swapping:\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping:\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);
}