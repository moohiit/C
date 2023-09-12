
//WAP To show Working of C File(Read Write Delete)
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    char ch[100];
    char temp;
    fp=fopen("sample.txt","w");

    //Write data into a file.
    printf("Enter Your Data : ");
    scanf("%[^\n]s",&ch);
    fprintf(fp,"%s\n",ch);
    fclose(fp);

    //Create a file to delete. 
    FILE *fpt;
    fpt=fopen("sample1.txt","w");
    printf("Enter Your Data : ");
    scanf("%c",&temp);
    scanf("%[^\n]s",&ch);
    fprintf(fpt,"%s\n",ch);
    fclose(fpt);

    //Read data from the file.
    fp=fopen("sample.txt","r");
    fscanf(fp,"%s",&ch);
    printf("%s\n",ch);
    fclose(fp);
    
    

    //Delete the file.
    remove("sample1.txt");
    
}