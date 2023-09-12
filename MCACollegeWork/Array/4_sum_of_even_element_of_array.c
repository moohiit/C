
//Write a program to print sum of even elementof the array:

#include<stdio.h>
int main(){
    int a[10],i,sum=0;
    printf("Enter the elements of the array:\n");
    for(i=0;i<=9;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            sum+=a[i];
        }
    }
    /*for(i=0;i<=9;i++)
    {
        if(a[i]%2==0){
            sum+=a[i];
        }
    }*/
    printf("Sum of Even elements of the array:%d",sum);
}