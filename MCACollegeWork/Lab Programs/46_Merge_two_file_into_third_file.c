
//WAP to merge two Files into a third File.
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp1,*fp2,*fp3;
    char ch;

    //open first file
    fp1=fopen("1_Area_of_circle.c","r");
    fp2=fopen("2_Area_of_rectangle.c","r");
    fp3=fopen("merge.txt","w");

    //merging two files.
    while(1){
        ch=fgetc(fp1);
        if(ch==EOF){
            break;
        }
        fprintf(fp3,"%c",ch);
    }
    fprintf(fp3,"\n\nThis is second file merged below.\n\n");
    while(1){
        ch=fgetc(fp2);
        if(ch==EOF){
            break;
        }
        fprintf(fp3,"%c",ch);
    }

    fclose(fp3);

    return 0;
}