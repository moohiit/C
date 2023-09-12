#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Any character:\n");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("Character is a Vowel.");
    }
    else{
        printf("Character is Consonent.");
    }
    return 0;
}