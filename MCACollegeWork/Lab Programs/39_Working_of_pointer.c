

// C program to illustrate Pointers
#include <stdio.h>
 
void pointer()
{
    int var = 20;
 
    // declare pointer variable
    int* ptr;
 
    // note that data type of ptr and var must be same
    ptr = &var;
 
    // assign the address of a variable to a pointer
    printf("Value at ptr = %p \n", ptr);
    printf("Value at var = %d \n", var);
    printf("Value at *ptr = %d \n", *ptr);
}
 
// Driver program
int main()
{
    pointer();

    int x = 10;

 
    // 1) Since there is * in declaration, ptr
    // becomes a pointer variable (a variable
    // that stores address of another variable)
    // 2) Since there is int before *, ptr is
    // pointer to an integer type variable
    int* ptr;
 
    // & operator before x is used to get address
    // of x. The address of x is assigned to ptr.
    ptr = &x;

    //print the address of 'X'
    printf("Address of x : %p",ptr);

}