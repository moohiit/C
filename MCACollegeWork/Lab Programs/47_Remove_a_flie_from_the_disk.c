
//Write a program to remove a file from the disk.
#include<stdio.h>
#include<stdlib.h>
int main(){

    FILE *fpt;
    char ch[100];
    char temp;
    //Create a file to delete. 
    fpt=fopen("sample1.txt","w");
    printf("Enter Data in your file : ");
    scanf("%[^\n]s",&ch);
    fprintf(fpt,"%s\n",ch);
    fclose(fpt);

    //remove your created file
    char c;
    printf("Do you want to delete your file.\n Choose 'Y' or 'N' : ");
    scanf("%c",&temp);
    scanf("%c",&c);

    if (c=='Y' || c=='y')
    {
        remove("sample1.txt");
    }
    return 0;
}