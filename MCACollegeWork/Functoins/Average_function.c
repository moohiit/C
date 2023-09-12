
//Write program to create a function for average.
#include <stdio.h>
void avg();
int main(){
    printf("Average of numbers:\n\n");
    avg();
}

void avg(){
    int i,n;
    printf("enter the range of numbers:");
    scanf("%d",&n);
    float a[n],sum=0,avg;
    printf("\nEnter your numbers:\n");
    for (i=0;i<n;i++){
        printf("a%d=",i);
        scanf("%f",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("Average of %d numbers: %f",n,avg);
}