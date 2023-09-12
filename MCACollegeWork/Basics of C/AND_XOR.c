

// write a program to print AND and XOR truth table.
#include<stdio.h>
#include<conio.h>
   void main()
     {
      int a,b,temp,i;
      printf("\tA   B   AND  OR  NOT\n");
      for(i=0;i<4;i++)
        {
          temp=i;
          a=i%2;
          temp/=2;
          b=temp%2;
          printf("\n\t%d   %d    %d    %d   %d\n",b,a,a&b,a|b,!b);
         }
  getch();
  }