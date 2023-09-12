

//functions for input and output of strings :gets() and puts()
#include<stdio.h>
int main()
{
char name[30];
printf("Enter name: ");
gets(name);
puts(name);
printf("Name: %s",name);
}