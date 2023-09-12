
// Recursion function : Sum of first n natural numbers.

#include<stdio.h>

int sumN( int n);

int main(){
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    printf("Sum of First %d Natural numbers: %d",n,sumN(n));
}

int sumN(int n){
    if(n==1){
        return 1;
    }
    int sumNm1=sumN(n-1);
    int sumN = sumNm1 + n;
    return sumN;

}