/*
strchr()

Syntax: char *strchr(char *str, int ch)

It takes a string and a character as input and finds out the 
first occurrence of the given character in that string. It will 
return the pointer to the first occurrence of that character; 
if found otherwise, return Null.

strrchr()

Syntax: char *strrchr(char *str, int ch)
It takes a string and a character as input and finds out the 
last occurrence of a given character in that string. 
It will return the pointer to the last occurrence of that 
character if found otherwise, return Null.
*/

//When the character is present in the given string
#include <stdio.h>
#include <string.h>

int main() {

  //strchr()
  char string1[30] = "I love to write.";
  printf("%s\n", strchr(string1, 'w'));
  printf("%s\n", strchr(string1, 'x'));


  //strrchr()
  char string2[30] = "I love to write blogs.";
  printf("%s\n", strrchr(string2, 'w'));
  printf("%s\n", strrchr(string2, 'x'));

}