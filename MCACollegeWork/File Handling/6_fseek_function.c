
// C Program to demonstrate the use of fseek()
#include <stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
    char ch[100];
    char temp;
	fp = fopen("test.txt", "a+");

    if(fp==NULL){
        printf("File type Error.\n");
        exit(1);
    }
    //Enter your content at the starting of the file.
    printf("Enter your content : ");
    scanf("%[^\n]s",&ch);
    fprintf(fp,"%s\n",ch);

    //moving pointer to starting of file.
	fseek(fp, 0, SEEK_SET);
	printf("Position of cursor : %ld\n", ftell(fp));
    
    //Enter your content at the starting of the file.
    printf("Enter your content : ");
    scanf("%d",&temp);
    scanf("%[^\n]s",&ch);
    fprintf(fp,"%s\n",ch);
	
	// Moving pointer to end
	fseek(fp, 0, SEEK_END);
	
	// Printing position of pointer
	printf("New position of cursor : %ld\n", ftell(fp));
    // Enter your content at end of the file.
    printf("Enter your content : ");
    scanf("%d",&temp);
    scanf("%[^\n]s",&ch);
    fprintf(fp,"%s\n",ch);

    fclose(fp);

	return 0;
}
