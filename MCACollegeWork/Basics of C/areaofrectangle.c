#include<stdio.h>
int main()
{
    int l,b,area;
    printf("Program to find 'Area of rectangle' \n\n");
    printf("Enter the length of rectangle:\t");
    scanf("%d",&l);
    printf("Enter the width of rectangle:\t");
    scanf("%d",&b);
    area=l*b;
    printf("Area of Rectangle:\t %d",area);
    return 0;

}