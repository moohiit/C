#include<stdio.h>
int main()
{
    int r;
    float area,pi=3.14;
    printf("Enter the radius of Circle:");
    scanf("%d",&r);
    area=pi*r*r;
    printf("Area of circle of radius %d is %f",r,area);
    return 0;

}