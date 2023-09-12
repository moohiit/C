/*Automatic
o Automatic variables are allocated memory automatically at runtime.
o The visibility of the automatic variables is limited to the block in which they are 
defined.
o The automatic variables are initialized to garbage by default.
o The memory assigned to automatic variables gets freed upon exiting from the 
block.
o The keyword used for defining automatic variables is 
auto. 
o Every local variable is automatic in C by default.
*/
#include <stdio.h>
int main()
{
int a; //auto
char b;
float c;
printf("Garbage values as default values:'%d' '%c' '%f'\n",a,b,c); // printing initial default value of automatic variables a, b, and
a = 10;
int i;
printf("%d \n",++a);
{
int a = 20;
for (i=0;i<3;i++)
{
printf("%d \n",a); // 20 will be printed 3 times since it is the local value of a
}
}
printf("%d ",a); // 11 will be printed since the scope of a = 20 is ended.

return 0;
}

