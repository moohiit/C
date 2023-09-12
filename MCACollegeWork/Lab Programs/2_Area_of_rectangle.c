#include<stdio.h>
int main()
{
    int l,b,area;
    printf("Program to find 'Area of rectangle.' \n");
    printf("Enter the length of rectangle: ");
    scanf("%d",&l);
    printf("Enter the width of rectangle: ");
    scanf("%d",&b);
    area=l*b;
    printf("Area of Rectangle: %d",area);
    return 0;

}