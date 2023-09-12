
//Program to make calculator:
#include<stdio.h>
int main(){

    int a,b,ans;
    char o;
    printf("Enter your first number:");
    scanf("%d",&a);
    printf("\nEnter your second number:");
    scanf("%d",&b);
    printf("\nEnter your operation symbol:");
    scanf("%c",&o);

    if(o=='+'){
        printf("Addition of %d and %d = %d",a,b,ans=a+b);
    }else if(o=='-'){
        printf("Subtraction of %d and %d = %d",a,b,ans=a-b);
    }else if(o=='/'){
        printf("Subtraction of %d and %d = %d",a,b,ans=a/b);
    }else if(o=='*'){
        printf("Subtraction of %d and %d = %d",a,b,ans=a*b);
    }else if(o=='%'){
        printf("Subtraction of %d and %d = %d",a,b,ans=a%b);
    }else{
        printf("Invalid operation");
    }
}