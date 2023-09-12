#include<stdio.h>
int main()
{
    float x;
    printf("enter floating value:\n");
    scanf("%f",&x);
    printf("The vlue of x = %f\n",x);
    // for only two values after decimal.
    printf("The value of x = %.2f",x);
    return 0;
    
}