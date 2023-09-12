
//WAP to find the Factorial of any number using function.
#include<stdio.h>
int factorial(int);
int main(){
    int a,fact;
    printf("Enter your number:");
    scanf("%d",&a);
    fact=factorial(a);
    printf("Factorial of %d is %d",a,fact);
}
int factorial(int a){
    int i,fact=1;
    for(i=a;i>=1;i--){
        fact*=i;
    }
    return fact;
}