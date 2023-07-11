#include<stdio.h>
void main()
{
    int i,n;
    printf("enter the upto which even number to be printed");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        printf("%d\n",i);
    }
}