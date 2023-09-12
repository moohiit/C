
// write a program to give the example of left shift and right shift bit-wise operator.
#include<stdio.h>
int main()
{
    int a,n;
    printf("Enter any number to shift : ");
    scanf("%d",&a);
    printf("\nEnter the value of shift (n): ");
    scanf("%d",&n);
    printf("\nRight shift of %d is %d",a,a>>n);
    printf("\nLeft shift of %d is %d",a,a<<n);

    return 0;
}