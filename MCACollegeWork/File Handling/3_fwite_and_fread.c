#include<stdio.h>
struct student{
   int sno;
   char sname [30];
   float marks;
   char temp;

};
int main ( ){
   struct student s[60];
   int i;
   FILE *fp;
   //fwrite( & structure variable , size of structure variable, no of records, file pointer);
   fp = fopen ("student1.txt", "w");
   for (i=0; i<2; i++){
      printf ("enter details of student %d\n", i+1);
      printf("student number:");
      scanf("%d",&s[i].sno);
      scanf("%c",&s[i].temp);
      printf("student name:");
      gets(s[i].sname);
      printf("student marks:");
      scanf("%f",&s[i].marks);
      fwrite(&s[i], 5*sizeof(s[i]),1,fp);
   }
   fclose (fp);

   //fread( & structure variable , size of structure variable, no of records, file pointer);
   fp = fopen ("student1.txt", "r");
   for (i=0; i<2; i++){
      printf ("\nDetails of student %d :", i+1);
      fread (&s[i], 5*sizeof(s[i]) ,1,fp);
      printf("\nstudent number = %d", s[i]. sno);
      printf("\nstudent name = %s", s[i]. sname);
      printf("\nmarks = %f", s[i]. marks);
   }
   fclose(fp);
}