
/*External
o The external storage class is used to tell the compiler that the variable defined as 
extern is declared with an external linkage elsewhere in the program.
o The variables declared as extern are not allocated any memory. It is only 
declaration and intended to specify that the variable is declared elsewhere in the 
program.
o The default initial value of external integral type is 0 otherwise null.
o We can only initialize the extern variable globally, i.e., we can not initialize the 
external variable within any block or method.
o An external variable can be declared many times but can be initialized at only 
once.
o If a variable is declared as external then the compiler searches for that variable 
to be initialized somewhere in the program. If it is not, then the compiler will 
show an error.
*/

//Example 1.
// #include <stdio.h>
// int main()
// {
// extern int a;
// printf("%d",a);
// }

// //Example 2.
// #include <stdio.h>
// int a;
// int main()
// {
// extern int a; // variable a is defined globally, the memory will not be allocated to a
// printf("%d",a);
// }

// //Example 3
// #include <stdio.h>
// int a;
// int main()
// {
// extern int a = 0; // this will show a compiler error since we can not use extern and initializer at same time
// printf("%d",a);
// }

// //Output
// compile time error
// main.c: In function ?main?:
// main.c:5:16: error: ?a? has both ?extern? and initializer extern int a = 0;

// //Example 4
#include <stdio.h>
int main()
{
extern int a; // Compiler will search here for a variable a defined and initialized somewhere in the pogram or not.
printf("%d",a);
}
int a = 20;

// Output
// 20