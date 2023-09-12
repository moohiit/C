#include<stdio.h>
int main()
{
    int s;
    printf("Enter the Marks of student:\n");
    scanf("%d",&s);
    if(s>=33){
        printf("You pass the exam.");
    }
    else{
        printf("Fail.");
    }
    return 0;
}