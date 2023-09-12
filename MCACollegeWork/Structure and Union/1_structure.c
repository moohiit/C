
//Write a program to create a structure having student details.
#include<stdio.h>
#include<string.h>
struct student{
    int rollno;
    char name[20];
};
int main(){
    int i;
    struct student st[5];
    printf("Enter Records of 5 students");
    for(i=0;i<5;i++){
        printf("\nEnter Rollno:");
        scanf("%d",&st[i].rollno);
        printf("Enter Name:");
        scanf("%s",&st[i].name);
        
    }
    printf("\nStudent Information List:");
    for(i=0;i<5;i++){
        printf("\nRoll No: %d\nName: %s\n",st[i].rollno,st[i].name);
    }
    return 0;
}