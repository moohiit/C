//Write a program to find the area of circle.

#include<stdio.h>
int main()
{
    int r;
    float area,pi=3.14;
    printf("Area of Circle:\n");
    printf("Enter Radius :");
    scanf("%d",&r);
    area=pi*r*r;
    printf("Area of Circle: %f",area);
    return 0;
}