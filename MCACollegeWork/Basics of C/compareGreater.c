#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three No:");
    scanf("%d%d%d",&a,&b,&c);
    printf("a=%d\nb=%d\nc=%d\n",a,b,c);

    if(a>b && a>c){
        printf("%d is greater",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is greater",b);
    }
    else{
        printf("%d is greater",c);
    }
    return 0;
}