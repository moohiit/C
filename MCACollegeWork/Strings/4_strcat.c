
#include<stdio.h>  
#include <string.h>    
int main(){    
  char ch[10]={'h', 'e', 'l', 'l', 'o', '\0'};    
  char ch2[10]={'c', '\0'};    
  strcat(ch,ch2);    
  printf("Value of first string is: %s\n",ch);
//Using strcat():
  char string1[10] = "Hello";
  char string2[10] = "World";
  strcat(string1, string2);
  printf("Output string after concatenation: %s", string1);
  
  //Using strncat():
  strncat(string1,string2, 3);
  printf("Concatenation using strncat: %s", string1);
 return 0;    
}    