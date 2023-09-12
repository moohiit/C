#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two Numbers: \n");
    scanf("%d%d",&a,&b);
    printf("a=%d, b=%d\n\n",a,b);
    a=a+b; //a=5 b=3 ,a=5+3, a=8
    b=a-b; //a=8 b=3 ,b=8-3, b=5
    a=a-b; //a=8 b=5 ,a=8-5, a=3
    printf("New values of a=%d and b=%d ",a,b);
    return 0;
}