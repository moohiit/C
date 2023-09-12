
//WAP to display Content of a File.
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char ch;

    fp=fopen("1_Area_of_circle.c","r");
    if(fp == NULL){
        printf("file opening error!");
        exit(1);
    }
    printf("File successfully opened.\nContent of file printed below :\n\n");
    while(1){

        ch = fgetc(fp);
        if(ch==EOF)
        break;
        printf("%c",ch);
    }
    return 0;
}