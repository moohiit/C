
//41.WAP To display Employee Information using Struct.

#include<stdio.h>

struct emp {
    int emp_id;
    char emp_name[20];
    int emp_salary;
};
int main(){
    int i,n;
    printf("Enter the number of employee: ");
    scanf("%d",&n);
    struct emp em[n];
    printf("Enter employee Information:\n");
    
    for(i=0;i<n;i++){
        printf(" **Employee %d**\n",i+1);
        printf("Enter employee ID: ");
        scanf("%d",&em[i].emp_id);
        printf("Enter employee name: ");
        scanf("%s",em[i].emp_name);
        printf("Enter employee salary: ");
        scanf("%d",&em[i].emp_salary);
        printf("\n");
    }

    //Printing employee information.
    for(i=0;i<n;i++){
        printf(" **Employee %d**\n",i+1);
        printf("Employee ID: %d\n",em[i].emp_id);
        printf("Employee name: %s\n",em[i].emp_name);
        printf("Employee salary: %d\n\n",&em[i].emp_salary);
    }

}