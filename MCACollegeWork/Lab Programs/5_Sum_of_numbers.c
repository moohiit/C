//Write a program to find Sum of three numbers.

#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter three Number to get your Sum:\n");

    //Input three numbers:
    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    printf("c=");
    scanf("%d",&c);
    
    
    //Sum of three numbers:
    printf("\nSum of %d, %d and %d = %d",a,b,c,sum=(a+b+c));
    return 0;
    
}
