

//WAP to show call by value and call by reference.


// C program to illustrate
// call by value

#include <stdio.h>

// Function Prototype
void swapx(int x, int y);

// Main function
int main(){
    int x = 10, y = 20;
    printf("values Before using in the function:\n");
    printf("x=%d y=%d\n", x, y);

    // Pass by Values
    swapx(x, y);
    printf("values Outside the function:\n");
    printf("x=%d y=%d\n", x, y);
    return 0;
}

// Swap functions that swaps
// two values
void swapx(int x, int y){
    int t;
    t = x;
    x = y;
    y = t;
    printf("After swapping inside swap function:\n");
    printf("x=%d y=%d\n", x, y);
}


/*
values Before using in the function:
x=10 y=20
After swapping inside swap function:
x=20 y=10
values Outside the function:
x=10 y=20
*/

