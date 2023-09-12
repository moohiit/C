
//write a program to form an array and find all even and odd elements of the array and count.

#include<stdio.h>
int main()
{
    int a[10],i,even=0,odd=0;
    printf("Enter the Elements of the Array:\n");
    /*
    for ( i = 0; i <= 9; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            printf("%d is even.\n",a[i]);
            even++;
        }
        else{
            printf("%d is odd.\n",a[i]);
            odd++;
        }
    }
    */
    for ( i = 0; i <= 9; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <= 9; i++)
    {
        if(a[i]%2==0){
            printf("%d is even.\n",a[i]);
            even++;
        }
        else{
            printf("%d is odd.\n",a[i]);
            odd++;
        }
    }

    
    printf("Total number of even elements :%d\n",even);
    printf("Total number of odd elements :%d",odd);

}