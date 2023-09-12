
#include <stdio.h>
#include <stdlib.h>

int main()
{
char val1[100];
char val2[300];
char ch;

FILE *fptr;
fptr = fopen("sample.txt","r");
// The program will exit in case the file pointer fptr returns NULL.
if ( fptr == NULL){
printf("Visible error detected. Cannot open the file!\n");
exit(1);
}
fscanf(fptr,"%s", &val1);//it will print only single word.
printf("The fetched word is = %s\n", val1);

rewind(fptr);
fscanf(fptr,"%[^\n]s", &val2);//it will print full sentence string.
printf("Full sentence string is = %s\n", val2);
fclose(fptr);

//Printing full file data at once.
fptr=fopen("1_write.c","r");
printf("Full file feched and printed below :\n\n");
while ( 1 ) 
{ 
ch = fgetc ( fptr ); 
if ( ch == EOF ) 
break; 
printf("%c",ch); 
} 
fclose (fptr ); 
return 0;
}