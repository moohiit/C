
//Write a program to print week days using numbers.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Any number 1-7 to print day of weeek: ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    
    default:
        printf("Invalid Choice");
        break;
    }
    return 0;
}