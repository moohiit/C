/*
Register
o The variables defined as the register is allocated the memory into the CPU 
registers depending upon the size of the memory remaining in the CPU.
o We can not dereference the register variables, i.e., we can not use &operator for 
the register variable.
o The access time of the register variables is faster than the automatic 
variables.
p The default value of the register is garbage value.
q The register keyword is used for the variable which should be stored in the 
CPU register. However, it is compiler’s choice whether or not; the variables can 
be stored in the register.
o We can store pointers into the register, i.e., a register can store the address of a 
variable.
o Static variables can not be stored into the register since we can not use more 
than one storage specifier for the same variable
*/
#include <stdio.h>
void main()
{
{
register int a;
printf("%d",a);
}

{
register int b = 0;
printf("%u",&b); // This will give a compile time error since we can not access the address of a register variable.
}

}