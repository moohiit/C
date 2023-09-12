

#include<stdio.h>  
#include <string.h>    
int main(){    
  char str[20];  

  //strlwr()  
  printf("Enter string: ");    
  gets(str);//reads string from console    
  printf("String is: %s",str);    
  printf("\nLower String is: %s",strlwr(str)); 
  
  //strupr()
  printf("\nEnter string: ");    
  gets(str);//reads string from console    
  printf("String is: %s",str);    
  printf("\nUpper String is: %s",strupr(str));     
 return 0;    
}    