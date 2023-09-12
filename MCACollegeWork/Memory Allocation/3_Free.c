
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr1,*ptr2;
    int n,i;
    printf("Enter the size of memory:");
    scanf("%d",&n);

    //Using malloc().
    ptr1=(int*) malloc(n*sizeof(int));
    printf("Enter the Data in ptr1: ");
    scanf("%d",&ptr1);
    printf("Data in ptr1 memory is : %d\n",ptr1);
    printf("Data size of ptr1 memory before using free() is : %d\n",sizeof(ptr1));


    //Using calloc().
    ptr2=(int*) calloc(n,sizeof(int));
    printf("Enter the Data in ptr2: ");
    scanf("%d",&ptr2);
    printf("Data in ptr2 memory is : %d\n",ptr2);
    printf("Data size of ptr2 memory before using free() is : %d\n",sizeof(ptr2));


    //Checking the status of memory allocated.
    if (ptr1 == NULL || ptr2 == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else{
        printf("Memory is successfully allocated using malloc().\n");
        printf("Memory is successfully allocated using calloc().\n");        

    }

    //Free up the allocated memory using free() function.
    free(ptr1);
    printf("malloc Memory successfully freed.\n");
    free(ptr2);
    printf("calloc Memory successfully freed.\n");

    //Now checking the memory is freed or not
    printf("Data in ptr1 memory after using free() is : %d\n",ptr1);
    printf("Data size of ptr1 memory after using free() is : %d\n",sizeof(ptr1));
    
    printf("Data in ptr2 memory after using free() is : %d\n",ptr2);
    printf("Data size of ptr2 memory after using free() is : %d\n",sizeof(ptr2));

    

    return 0;
}