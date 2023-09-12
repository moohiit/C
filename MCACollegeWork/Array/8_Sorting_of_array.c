#include<stdio.h>
int main()
{
    int n,i,j,t;
    printf("Enter the length of array:");
    scanf("%d",&n);
    n-=1;
    printf("Enter the element of your array:");
    int a[n];
    for(i=0;i<=n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    //Arrange the elements in ascending order:
    for(i=0;i<=n;i++){
        for(j=i;j<=n;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    //printing sorted array:
    for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
}