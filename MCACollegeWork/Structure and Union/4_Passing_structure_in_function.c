
//Write a program to pass a structure in a function.
#include<stdio.h>
#include<string.h>

struct address{
    char city[20];
    int pin[10];
    int phone[10];
};
struct Employee{
    char name[20];
    struct address ad;
};

//Now creating a function.
void display(struct Employee emp[] );

int main(){
    int i,n;
    printf("Enter the number of Employees: ");
    scanf("%d",&n);
    struct Employee emp[n];
    printf("\nEnter the Employee Details:\n");
    for(i=0;i<n;i++){
        printf("Enter the name : ");
        scanf("%s",emp[i].name);
        printf("Enter the city : ");
        scanf("%s",emp[i].ad.city);
        printf("Enter the Pincode : ");
        scanf("%d",emp[i].ad.pin);
        printf("Enter the Phone Number : ");
        scanf("%s",emp[i].ad.phone);
        printf("\n\n");
    }
    printf("Employee Details:\n");
    
    display(emp);
}

void display(struct Employee emp[]){
    int n;
    printf("Enter the value of employeee:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\nEmployee Name: %s",emp[i].name);
        printf("\nEmployee city: %s",emp[i].ad.city);
        printf("\nEmployee Pincde: %d",emp[i].ad.pin);
        printf("\nEmployee Phone: %s",emp[i].ad.phone);
    }
}