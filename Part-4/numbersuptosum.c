#include<stdio.h>
void main()
{
    int i,n=0,sum=0;
    printf("enter the upto which sum to be finded");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum +=i;
    }
    printf("sum is %d",sum);
}