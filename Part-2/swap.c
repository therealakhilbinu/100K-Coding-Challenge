#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("enter two numbers a & b for swapping");
    scanf("%d%d",&a,&b);
    printf("\n the number before swapping a is %d and b is %d ",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\n the number after swapping a is %d and b is %d ",a,b);
}