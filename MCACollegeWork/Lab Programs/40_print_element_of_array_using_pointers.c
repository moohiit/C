
//Write a program to print the elements of an array using pointer.

#include <stdio.h>
int main() {
    int data[5];

    printf("Enter elements: \n");
    for (int i = 0; i < 5; ++i){
        printf("%d index address of array : %d\n",i, data + i);
        printf("Enter your element :");
        scanf("%d", data + i);
    }

    printf("You entered: \n");
    for (int i = 0; i < 5; ++i)
        //printing the elements of array using pointer.
        printf("%d\n", *(data + i));
    return 0;
}
