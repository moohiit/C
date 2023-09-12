
//Write a program to check a character whether it is a vowel or consonent.
#include<stdio.h>
int main()

{
    char ch;
    printf("Enter any character a-z to check: ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("Your Character-'%c' is a Vowel",ch);
    }else{
        printf("Your Character-'%c' is a Consonent",ch);
    }
    
    return 0;
}