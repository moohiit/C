
//Write a program to copy a sting value to another variable.

#include <stdio.h>
#include <string.h>
int main () {
char str1[12] = "Hello";
char str2[12] = "World";
char str3[12];
int  len ;
/* copy str1 into str3 */
strcpy(str3, str1);
printf("Str3 : %s\n",str3);

//strncpy()
  char string1[30] = "string 1";
  char string2[40] = "Only 12 characters will be copied.";
  strncpy(string1, string2, 12);
  printf("String s1 is: %s", string1);
}