
//strstr()

//The strstr() function returns pointer to the first 
//occurrence of the matched string in the given string. 
//It is used to return substring from first match till the last character.

#include<stdio.h>  
#include <string.h>    
int main(){    
  char str[100]="this is javatpoint with c and java";    
  char *sub;    
  sub=strstr(str,"java");    
  printf("\nSubstring is: %s\n",sub); 
     
 return 0;    
}    