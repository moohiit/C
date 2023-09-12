
//Write a progam to create a seperate nested structure.
#include<stdio.h>

struct Employee {
    int emp_id; 
    char emp_name[20];
    int emp_sal; 
};

struct organisation {
    char org_name[20];
    int org_id;
    struct Employee emp;
};

int main(){
    struct organisation org[20];
    org[0]={'OPPO',2352,{2336,'Alviya',2000000}};
    org[1]={'POCO',23452,{2006,'Chaman',2500000}};
    org[2]={'Apple',3242,{24747,'Safari',3000000}};

    printf("Organisation Name: %s",org[1].org_name);



}
