

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array : \n");
    int i,j,temp;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Array: [ ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("]\n");

    //Bubble short start.
    for ( i = 0; i < n; i++){
        for(j=0; j<n-i; j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    //sorted array:
    printf("Array: [ ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("]\n");
    
    return 0;

}