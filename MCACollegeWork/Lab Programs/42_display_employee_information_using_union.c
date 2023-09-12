

//WAP To display Employee Information using Union.
#include<stdio.h>

union emp {
    int emp_id;
    char emp_name[20];
    int emp_salary;
};
int main(){
    int i,n;
    printf("Enter the number of employee: ");
    scanf("%d",&n);
    union emp em[n];
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
    // Here union holds only single information at a time, the information updated
    //at the last only remains in it, so on printing it will print only salary 
    //as employee id and after printing that value union gets reset and then
    //further printing the name and salary it will print only garbage values.

    //Printing employee information.
    for(i=0;i<n;i++){
        printf(" **Employee %d**\n",i+1);
        printf("Employee ID: %d\n",em[i].emp_id);
        //it will show you salary only
        printf("Employee name: %s\n",em[i].emp_name);
        //here garbage value is printed
        printf("Employee salary: %d\n\n",&em[i].emp_salary);
        //here garbage also.
    }
}