
/*Static
o The variables defined as static specifier can hold their value between the 
multiple function calls.
o Static local variables are visible only to the function or the block in which they 
are defined.
o A same static variable can be declared many times but can be assigned at only 
one time.
o Default initial value of the static integral variable is 0 otherwise null.
o The visibility of the static global variable is limited to the file in which it has 
declared.
o The keyword used to define static variable is static.
*/

#include<stdio.h>

static char c;
static int i;
static float f;
static char s[100];

void sum()
{ 
static int a = 10;
static int b = 24;
printf("%d %d \n",a,b);
a++;
b++;
}
void main(){
int i;
// the initial default value of c, i, and f will be printed
printf("'%d' '%d' '%f' '%s'\n",c,i,f,s);
for(i = 0; i< 3; i++)
{
sum(); // The static variables holds their value between multiple function calls.
}
}