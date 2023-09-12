
//C program to find the HCF of two numbers.
#include<stdio.h>
int main()
{
    int i, num1,num2,min,hcf=1;

    //Input two numbers from user.
    printf("Enter any two numbers to find HCF: \n");
    printf("num1= ");
    scanf("%d",&num1);
    printf("num2= ");
    scanf("%d",&num2);

    //Find the minimum number.
    min = (num1<num2) ? num1 : num2;

    for(i=1;i<=min;i++){
        if (num1%i==0 && num2%i==0)
        {
            hcf=i;
        }        
    }
    printf("HCF of %d and %d = %d",num1,num2,hcf);

    return 0;
}