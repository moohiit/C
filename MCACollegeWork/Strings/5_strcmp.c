

/*
strcmp() takes two strings as input, then compares them, and returns an integer based on the following condition:

Expression	          Returns
string 1 > string 2	  Positive integer
string 1 < string 2	  Negative
string 1 = string 2	  Zero
*/
#include <stdio.h>
#include <string.h>

int main() {

  char s1[20] = "ScalerAcademy"; // string1
  char s2[20] = "ScalerAcademy.COM"; // string2
  // comparing both the strings

  //strcmp()
  printf("Using strcmp():\n");
  if (strcmp(s1, s2) == 0) {
    printf("string 1 and string 2 are equal\n");
  } else {
    printf("string 1 and 2 are different\n");
  }

  //strncmp()
  printf("Using strncmp():\n");
  if (strncmp(s1, s2, 5) == 0) {
    printf("string 1 and string 2 are equal");
  } else {
    printf("string 1 and 2 are different");
  }
}
