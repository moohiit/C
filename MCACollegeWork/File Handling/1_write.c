

//Program to write a .txt file or .bin file using file handling.
#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch[100];
    FILE *fptr;
    fptr=fopen("sample2.txt","w");

    if(fptr==NULL){
        printf("File type Error.\n");
        exit(1);
    }
    printf("Enter your content:\n");
    scanf("%[^\n]s",&ch);
    fprintf(fptr,"%s",ch);
    fclose(fptr);

    return 0;
}