#include<stdio.h>
void main()
{
    int a , b , c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("greater is %d",a);
    }
    else if(b>c && b>a)
    {
        printf("greater is %d",b);
    }
    else
    {
        printf("greater is %d",c);
    }
}