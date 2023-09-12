
//Write a program create a structure embedded with other structure.
#include<stdio.h>
#include<string.h>

struct emp{
    int e_id;
    float e_sal;
    struct date{
        int dd;
        int mm;
        int yy;
    }doj;
} e1;

int main(){
    printf("Enter Employee ID:");
    scanf("%d",&e1.e_id);
    printf("Enter Salary:");
    scanf("%f",&e1.e_sal);
    printf("Enter Date of joining:");
    scanf("%d%d%d",&e1.doj.dd,&e1.doj.mm,&e1.doj.yy);
    printf("Employee Details:\n");
    printf("ID: %d\nSalary: %f\nDate of Joining: %d-%d-%d",
            e1.e_id,e1.e_sal,e1.doj.dd,e1.doj.mm,e1.doj.yy);
    }