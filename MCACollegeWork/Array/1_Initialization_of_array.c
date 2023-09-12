
//Initialization of an array.

#include<stdio.h>
int main(){

//1.Complile time Initialization:-

    // (i).Initializing all specified memory locations:-
    int a[5]={10,20,30,40,50} ; // Fully initialized
    // (ii) Partial array initialization:-
    int b[5]={13,34,45};        // Partial initialized
    // Initialization with all zeros:-
    int a[5]={0};
    // (iii) Initialization without size:-
    char b[]={'C','O','M','P','U','T','E','R'};
    int c[]={23,45,65,67,75,34,6,34};

    // (iv) Array initialization with a string: -
    char b[]="COMPUTER";
    // Eventhough the string "COMPUTER" contains 8 characters, because it is a string, it always ends
    // with null character. So, the array size is 9 bytes (i.e., string length 1 byte for null character).
    // Ex:-
    char b[9]="COMPUTER"; // correct
    char b[8]="COMPUTER"; // wrong

    //int d[];  wrong way to initialise will give you an error.
    int e[5]; //other way
    e[0]=236;
    e[1]=236;
    e[2]=231;
    e[3]=224;
    e[4]=234;

// 2. Run Time Initialization
    // An array can be explicitly initialized at run time. This approach is usually applied for initializing
    // large arrays.
    // Ex:- scanf can be used to initialize an array.
    int x[3],i,sum[10];
    scanf("%d%d%d",&x[0],&x[1],&x[2]);
    // The above statements will initialize array elements with the values entered through the key
    // board. (Or)
    for(i=0;i<10;i=i+1)
    {
    if(i<5)
    sum[i]=0.0;
    else
    sum[i]=1.0;
    }
    // The first 50 elements of the array sum are initialized to 0 while the remaining 50 are initialized to
    // 1.0 at run time.


    return 0;
}