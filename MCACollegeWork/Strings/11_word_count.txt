
//Write a program to print the word count.
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    char s[200];
    int i,w_count=1,c_count=0,s_count=0;
    

    //Enter your string to perform operations on it.
    printf("Enter the string :\n");
    scanf("%[^\n]s",s);

    for ( i = 0; s[i]!='\0'; i++)
    {
        //count the words in the given string.
        if (s[i] == 32)
        w_count++;

        //Count the letters in the given string.
        if(s[i] != 32)
        c_count++;

        //count the spaces in the given string.
        if(s[i]==32)
        s_count++;
    }
    printf("Number of words in the given string : %d\n",w_count);
    printf("Number of Leters in the given string : %d\n",c_count);
    printf("Number of Spaces in the given string : %d\n",s_count);

    getch();
}