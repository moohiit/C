#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks of student:\n");
    scanf("%d",&marks);
    printf("Marks=%d\n",marks);

    if(marks>=0 && marks<33){
        printf("You got Grade-D");
    }
    else if(marks>=33 && marks<45){
        printf("You got Grade-C");
    }
    else if(marks>=45 && marks<60){
        printf("You got Grade-B");
    }
    else if(marks>=60 && marks<=100){
        printf("You got Grade-A");
    }
    else{
        printf("Invalid Input!");
    }
}