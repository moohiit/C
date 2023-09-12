

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n,i;
    
    //allocating memory using calloc.
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    ptr=(int*) calloc(n,sizeof(int));
    
    //checking memory allocation.
    if (ptr==NULL)
    {
        printf("Memory is not allocated.\n");
        exit(0);
    }else{
        printf("Memory allocated successfully.\n");
        printf("Enter elements in the array: \n");
        for ( i = 0; i < n; i++)
        {
            ptr[i]=i+1;
            printf("%d ",ptr[i]);
        }

        //Reallocating the memory size using realloc() function.
        printf("\nEnter the new size of memory:");
        scanf("%d",&n);
        free(ptr);
        realloc(ptr,n*sizeof(int));
        printf("New Memory allocated successfully.\n");
        printf("Enter elements in the array: \n");
        for ( i = 0; i < n; i++)
        {
            ptr[i]=i+1;
            printf("%d ",ptr[i]);
        }   
    }
    return 0;
}