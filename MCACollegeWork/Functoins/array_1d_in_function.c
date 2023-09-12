
// write a program to create an array using a function.
#include<stdio.h>

void add(int []);

void main()
{
    int a[]={12,45,32,25,63,59,22};
    add(a);
}

void add(int a[])
{
    int sum=0,i;
    for ( i = 0; i < 7; i++)
    {
        sum+=a[i];
    }
    printf("Sum of array : %d",sum);
    
}


// // write a program to create an array using a function.
// #include<stdio.h>

// // void add(int []);

// void add(int a[])
// {
//     int sum=0,i;
//     for ( i = 0; i < 7; i++)
//     {
//         sum+=a[i];
//     }
//     printf("Sum of array : %d",sum);

// }

// void main()
// {
//     int a[]={12,45,32,25,63,59,20};
//     add(a);
// }
