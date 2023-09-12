

//WAP to show working of different String Functions.
#include <stdio.h>
#include <string.h>

int main() {
  //1.strlen()  
  char string1[20] = "ScalerAcademy";
  printf("Length of string string1: %ld\n", strlen(string1));

  //2.strnlen()
  char string2[20] = "ScalerAcademy";
  printf("Length of string1 when maxlen is 25: %ld \n", 
            strnlen(string2, 25));
  printf("Length of string1 when maxlen is 5: %ld\n", 
            strnlen(string2, 5));

  //3.strcmp()         
  char s1[20] = "ScalerAcademy"; // string1
  char s2[20] = "ScalerAcademy.COM"; // string2
  // comparing both the strings
  if (strcmp(s1, s2) == 0) {
    printf("string 1 and string 2 are equal\n");
  } else {
    printf("string 1 and 2 are different\n");
  }

  //4.strncmp()
  char s3[20] = "ScalerAcademy";
  char s4[20] = "ScalerAcademy.COM";
  /* it only compares first 5 characters of both strings*/
  if (strncmp(s3, s4, 5) == 0) {
    printf("string 3 and string 4 are equal\n");
  } else {
    printf("string 3 and string 4 are different\n");
  }

  //5.strcat()
  char string3[10] = "Hello ";
  char string4[10] = "World";
  strcat(string3, string4);
  printf("Output string after concatenation: %s\n", string3);

  //6.strncat()
  char string5[10] = "Hello ";
  char string6[10] = "World";
  strncat(string5,string6, 3);
  printf("Concatenation using strncat: %s\n", string5);

  //7.strcpy()
  char s5[35] = "string 5"; // string1
  char s6[35] = "I'll be copied to string 5."; // string2
  strcpy(s5, s6); // copying string2 to string1
  printf("String s5 is: %s\n", s5); // printing string1

  //8.strncpy()
  char string7[30] = "string 8";
  char string8[40] = "Only 12 characters will be copied.";
  strncpy(string7, string8, 12);
  printf("String s7 is: %s\n", string7);

  //9.strchr()
  char string9[30] = "I love to write.";
  printf("%s\n", strchr(string9, 'w'));
  char string10[30] = "I love to write blogs.";
  printf("%s\n", strchr(string10, 'z'));

  //10.strrchr()
  char string11[30] = "I love to write blogs.";
  printf("%s\n", strrchr(string11, 'w'));
  char string12[30] = "I love to write blogs.";
  printf("%s\n", strrchr(string12, 'z'));

  //11.strstr()
  char string13[70] = "You are reading string functions.";
  printf("Output string is: %s\n", strstr(string13, "string"));

  //12.strncasecmp()
  char string14[70] = "STRING";
  char string15[70] = "steing";
  int result;
  result = strncasecmp(string14, string15, 3);
  //checking the result using conditional statements.
  if (result == 0)
    printf("Strings are equal.\n");
  else if (result < 0)
    printf("\"%s\" is less than \"%s\".\n", string14, string15);
  else
    printf("\"%s\" is greater than \"%s\".\n", string14, string15);
  

  return 0;
}

/*
String Functions
The following are the string functions in C:

Function	Description
strlen()	It returns the string's length.
strnlen()	It returns the specified value if the value specified is less than the string length, otherwise the string length.
strcmp()	It compares two strings and returns 0 if the strings are the same.
strncmp()	It compares two strings only to n characters.
strcat()	It concatenates two strings and returns the concatenated string.
strncat()	It concatenates n characters of one string to another string.
strcpy()	It copies one string into another.
strncpy()	It copies the first n characters of one string into another.
strchr()	It finds out the first occurrence of a given character in a string.
strrchr()	It finds out the last occurrence of a given character in a string.
strstr()	It finds out the first occurrence of a given string in a string.
strnstr()	It finds out the first occurrence of a given string in a string where the search is limited to n characters.
strcasecmp()	It compares two strings without sensitivity to the case.
strncasecmp()	It compares n characters of one string to another without sensitivity to the case.
*/