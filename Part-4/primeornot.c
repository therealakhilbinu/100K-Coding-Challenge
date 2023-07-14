#include<stdio.h>
void main()
{
    int i,n;
    printf("enter a number to check prime or not");
    scanf("%d",&n);
    int flag =0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag == 0)
    printf("number is prime");
    else
    printf("number is not prime");
}