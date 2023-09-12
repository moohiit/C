#include<stdio.h>
int main()

{
    int a,b;
    printf("Enter two numbers to perform bit-wise operations.\n");
    printf("a=");
    scanf("%d",&a);
    printf("\nb=");
    scanf("%d",&b);

    printf("\nA\tB\tOUTPUT\n");
    printf("\n%d  AND \t%d \t= %d\n",a,b,a&b);
    printf("%d  OR \t%d  \t= %d\n",a,b,a|b);
    printf("%d  XOR \t%d \t= %d\n",a,b,a^b);

    
    return 0;
}