
//C program to find the HCF of two numbers.
#include<stdio.h>
int main()
{
    int i, num1,num2,max,lcm=1;

    //Input two numbers from user.
    printf("Enter any two numbers to find LCM: \n");
    printf("num1= ");
    scanf("%d",&num1);
    printf("num2= ");
    scanf("%d",&num2);

    //Find the minimum number.
    max = (num1>num2) ? num1 : num2;

    for(i=max;i>=max;i++)
    {
        if (i%num1==0 && i%num2==0)
        {
            lcm=i;        
            break;
        }
    }
    printf("LCM of %d and %d = %d",num1,num2,lcm);

    return 0;
}