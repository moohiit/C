#include<stdio.h>
int main()
{
    int purchase;
    printf("Enter Amount of purchasing:");
    scanf("%d",&purchase);
    if(purchase>=2000){
        printf("Hey! You got 20 percent Discount.");
    }
    else{
        printf("No Discount.\nDo some more purchasing to get a discount.");
    }
    return 0;
}