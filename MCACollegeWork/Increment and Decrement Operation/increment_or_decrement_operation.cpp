
// Increment and decrement operation.
#include<stdio.h>
int main()
{
    int a,x;
    //printf("Enter any number a:");
    //scanf("%d",&a);
    a=5;
    a= ++a + ++a;
    printf("Solution of 'a= ++a + ++a' is %d\n",a);

    printf("Enter any number a:");
    scanf("%d",&a);
    x= ++a + --a;
    printf("Solution of 'a= ++a + --a' is %d\n",x);

    printf("Enter any number a:");
    scanf("%d",&a);
    x= ++a + a++;
    printf("Solution of 'a= ++a + a++' is %d\n",x);

    printf("Enter any number a:");
    scanf("%d",&a);
    x= --a + --a;
    printf("Solution of 'a= --a + --a' is %d\n",x);

    printf("Enter any number a:");
    scanf("%d",&a);
    x= --a + ++a;
    printf("Solution of 'a= --a + ++a' is %d\n",x);

    printf("Enter any number a:");
    scanf("%d",&a);
    x= --a + a-- + a--;
    printf("Solution of 'a= --a + a-- + a--' is %d\n",x);

    printf("Enter any number a:");
    scanf("%d",&a);
    x= ++a + ++a + a++;
    printf("Solution of 'a= ++a + ++a + a++' is %d\n",x);

    printf("Enter any number a:");
    scanf("%d",&a);
    a= --a + --a + ++a + a++;
    printf("Solution of 'a= --a + --a + ++a + a++' is %d\n",x);

    return 0;
}