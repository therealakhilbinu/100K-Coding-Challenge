#include<stdio.h>
void main()
{
    int i,sum,n;
    printf("enter the number to find sum");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2!=0)
        sum=sum+i;
    }
    printf("sum of odd numbers : %d",sum);
}