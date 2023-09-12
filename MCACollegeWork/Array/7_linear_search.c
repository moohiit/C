
//Write a program to search an element from an array.
#include<stdio.h>
int main()
{
    int n,i,ele,flag=0;
    printf("Enter the length of array:");
    scanf("%d",&n);
    printf("Enter the element of your array:\n");
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("Enter your search element:");
    scanf("%d",&ele);

    //Linear search start:
    for(i=0;i<n;i++){
        if(a[i]==ele){
            flag=1;
            break;
        }
    }
    //End of linear search.
    if(flag==1){
        printf("%d is found at a[%d]",ele,i);
    }else{
        printf("Not found");
    }
    return 0;
}