#include<stdio.h>
void main()
{
    int i,n,mult;
    printf("enter the number to print multiplication table");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        mult=n*i;
        printf("\n %d*%d = %d \n" ,i,n,mult);
    }
}